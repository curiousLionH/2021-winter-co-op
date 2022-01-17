# generated from
# ament_cmake_core/cmake/symlink_install/ament_cmake_symlink_install.cmake.in

# create empty symlink install manifest before starting install step
file(WRITE "${CMAKE_CURRENT_BINARY_DIR}/symlink_install_manifest.txt")

#
# Reimplement CMake install(DIRECTORY) command to use symlinks instead of
# copying resources.
#
# :param cmake_current_source_dir: The CMAKE_CURRENT_SOURCE_DIR when install
#   was invoked
# :type cmake_current_source_dir: string
# :param ARGN: the same arguments as the CMake install command.
# :type ARGN: various
#
function(ament_cmake_symlink_install_directory cmake_current_source_dir)
  cmake_parse_arguments(ARG "OPTIONAL" "DESTINATION" "DIRECTORY;PATTERN;PATTERN_EXCLUDE" ${ARGN})
  if(ARG_UNPARSED_ARGUMENTS)
    message(FATAL_ERROR "ament_cmake_symlink_install_directory() called with "
      "unused/unsupported arguments: ${ARG_UNPARSED_ARGUMENTS}")
  endif()

  # make destination absolute path and ensure that it exists
  if(NOT IS_ABSOLUTE "${ARG_DESTINATION}")
    set(ARG_DESTINATION "/home/amlab/coop_ws/src/mot_radar/mot_radar/install/custom_msgs/${ARG_DESTINATION}")
  endif()
  if(NOT EXISTS "${ARG_DESTINATION}")
    file(MAKE_DIRECTORY "${ARG_DESTINATION}")
  endif()

  # default pattern to include
  if(NOT ARG_PATTERN)
    set(ARG_PATTERN "*")
  endif()

  # iterate over directories
  foreach(dir ${ARG_DIRECTORY})
    # make dir an absolute path
    if(NOT IS_ABSOLUTE "${dir}")
      set(dir "${cmake_current_source_dir}/${dir}")
    endif()

    if(EXISTS "${dir}")
      # if directory has no trailing slash
      # append folder name to destination
      set(destination "${ARG_DESTINATION}")
      string(LENGTH "${dir}" length)
      math(EXPR offset "${length} - 1")
      string(SUBSTRING "${dir}" ${offset} 1 dir_last_char)
      if(NOT dir_last_char STREQUAL "/")
        get_filename_component(destination_name "${dir}" NAME)
        set(destination "${destination}/${destination_name}")
      else()
        # remove trailing slash
        string(SUBSTRING "${dir}" 0 ${offset} dir)
      endif()

      # glob recursive files
      set(relative_files "")
      foreach(pattern ${ARG_PATTERN})
        file(
          GLOB_RECURSE
          include_files
          RELATIVE "${dir}"
          "${dir}/${pattern}"
        )
        if(NOT include_files STREQUAL "")
          list(APPEND relative_files ${include_files})
        endif()
      endforeach()
      foreach(pattern ${ARG_PATTERN_EXCLUDE})
        file(
          GLOB_RECURSE
          exclude_files
          RELATIVE "${dir}"
          "${dir}/${pattern}"
        )
        if(NOT exclude_files STREQUAL "")
          list(REMOVE_ITEM relative_files ${exclude_files})
        endif()
      endforeach()
      list(SORT relative_files)

      foreach(relative_file ${relative_files})
        set(absolute_file "${dir}/${relative_file}")
        # determine link name for file including destination path
        set(symlink "${destination}/${relative_file}")

        # ensure that destination exists
        get_filename_component(symlink_dir "${symlink}" PATH)
        if(NOT EXISTS "${symlink_dir}")
          file(MAKE_DIRECTORY "${symlink_dir}")
        endif()

        _ament_cmake_symlink_install_create_symlink("${absolute_file}" "${symlink}")
      endforeach()
    else()
      if(NOT ARG_OPTIONAL)
        message(FATAL_ERROR
          "ament_cmake_symlink_install_directory() can't find '${dir}'")
      endif()
    endif()
  endforeach()
endfunction()

#
# Reimplement CMake install(FILES) command to use symlinks instead of copying
# resources.
#
# :param cmake_current_source_dir: The CMAKE_CURRENT_SOURCE_DIR when install
#   was invoked
# :type cmake_current_source_dir: string
# :param ARGN: the same arguments as the CMake install command.
# :type ARGN: various
#
function(ament_cmake_symlink_install_files cmake_current_source_dir)
  cmake_parse_arguments(ARG "OPTIONAL" "DESTINATION;RENAME" "FILES" ${ARGN})
  if(ARG_UNPARSED_ARGUMENTS)
    message(FATAL_ERROR "ament_cmake_symlink_install_files() called with "
      "unused/unsupported arguments: ${ARG_UNPARSED_ARGUMENTS}")
  endif()

  # make destination an absolute path and ensure that it exists
  if(NOT IS_ABSOLUTE "${ARG_DESTINATION}")
    set(ARG_DESTINATION "/home/amlab/coop_ws/src/mot_radar/mot_radar/install/custom_msgs/${ARG_DESTINATION}")
  endif()
  if(NOT EXISTS "${ARG_DESTINATION}")
    file(MAKE_DIRECTORY "${ARG_DESTINATION}")
  endif()

  if(ARG_RENAME)
    list(LENGTH ARG_FILES file_count)
    if(NOT file_count EQUAL 1)
    message(FATAL_ERROR "ament_cmake_symlink_install_files() called with "
      "RENAME argument but not with a single file")
    endif()
  endif()

  # iterate over files
  foreach(file ${ARG_FILES})
    # make file an absolute path
    if(NOT IS_ABSOLUTE "${file}")
      set(file "${cmake_current_source_dir}/${file}")
    endif()

    if(EXISTS "${file}")
      # determine link name for file including destination path
      get_filename_component(filename "${file}" NAME)
      if(NOT ARG_RENAME)
        set(symlink "${ARG_DESTINATION}/${filename}")
      else()
        set(symlink "${ARG_DESTINATION}/${ARG_RENAME}")
      endif()
      _ament_cmake_symlink_install_create_symlink("${file}" "${symlink}")
    else()
      if(NOT ARG_OPTIONAL)
        message(FATAL_ERROR
          "ament_cmake_symlink_install_files() can't find '${file}'")
      endif()
    endif()
  endforeach()
endfunction()

#
# Reimplement CMake install(PROGRAMS) command to use symlinks instead of copying
# resources.
#
# :param cmake_current_source_dir: The CMAKE_CURRENT_SOURCE_DIR when install
#   was invoked
# :type cmake_current_source_dir: string
# :param ARGN: the same arguments as the CMake install command.
# :type ARGN: various
#
function(ament_cmake_symlink_install_programs cmake_current_source_dir)
  cmake_parse_arguments(ARG "OPTIONAL" "DESTINATION" "PROGRAMS" ${ARGN})
  if(ARG_UNPARSED_ARGUMENTS)
    message(FATAL_ERROR "ament_cmake_symlink_install_programs() called with "
      "unused/unsupported arguments: ${ARG_UNPARSED_ARGUMENTS}")
  endif()

  # make destination an absolute path and ensure that it exists
  if(NOT IS_ABSOLUTE "${ARG_DESTINATION}")
    set(ARG_DESTINATION "/home/amlab/coop_ws/src/mot_radar/mot_radar/install/custom_msgs/${ARG_DESTINATION}")
  endif()
  if(NOT EXISTS "${ARG_DESTINATION}")
    file(MAKE_DIRECTORY "${ARG_DESTINATION}")
  endif()

  # iterate over programs
  foreach(file ${ARG_PROGRAMS})
    # make file an absolute path
    if(NOT IS_ABSOLUTE "${file}")
      set(file "${cmake_current_source_dir}/${file}")
    endif()

    if(EXISTS "${file}")
      # determine link name for file including destination path
      get_filename_component(filename "${file}" NAME)
      set(symlink "${ARG_DESTINATION}/${filename}")
      _ament_cmake_symlink_install_create_symlink("${file}" "${symlink}")
    else()
      if(NOT ARG_OPTIONAL)
        message(FATAL_ERROR
          "ament_cmake_symlink_install_programs() can't find '${file}'")
      endif()
    endif()
  endforeach()
endfunction()

#
# Reimplement CMake install(TARGETS) command to use symlinks instead of copying
# resources.
#
# :param TARGET_FILES: the absolute files, replacing the name of targets passed
#   in as TARGETS
# :type TARGET_FILES: list of files
# :param ARGN: the same arguments as the CMake install command except that
#   keywords identifying the kind of type and the DESTINATION keyword must be
#   joined with an underscore, e.g. ARCHIVE_DESTINATION.
# :type ARGN: various
#
function(ament_cmake_symlink_install_targets)
  cmake_parse_arguments(ARG "OPTIONAL" "ARCHIVE_DESTINATION;DESTINATION;LIBRARY_DESTINATION;RUNTIME_DESTINATION"
    "TARGETS;TARGET_FILES" ${ARGN})
  if(ARG_UNPARSED_ARGUMENTS)
    message(FATAL_ERROR "ament_cmake_symlink_install_targets() called with "
      "unused/unsupported arguments: ${ARG_UNPARSED_ARGUMENTS}")
  endif()

  # iterate over target files
  foreach(file ${ARG_TARGET_FILES})
    if(NOT IS_ABSOLUTE "${file}")
      message(FATAL_ERROR "ament_cmake_symlink_install_targets() target file "
        "'${file}' must be an absolute path")
    endif()

    # determine destination of file based on extension
    set(destination "")
    get_filename_component(fileext "${file}" EXT)
    if(fileext STREQUAL ".a" OR fileext STREQUAL ".lib")
      set(destination "${ARG_ARCHIVE_DESTINATION}")
    elseif(fileext STREQUAL ".dylib" OR fileext MATCHES "\\.so(\\.[0-9]+)?(\\.[0-9]+)?(\\.[0-9]+)?$")
      set(destination "${ARG_LIBRARY_DESTINATION}")
    elseif(fileext STREQUAL "" OR fileext STREQUAL ".dll" OR fileext STREQUAL ".exe")
      set(destination "${ARG_RUNTIME_DESTINATION}")
    endif()
    if(destination STREQUAL "")
      set(destination "${ARG_DESTINATION}")
    endif()

    # make destination an absolute path and ensure that it exists
    if(NOT IS_ABSOLUTE "${destination}")
      set(destination "/home/amlab/coop_ws/src/mot_radar/mot_radar/install/custom_msgs/${destination}")
    endif()
    if(NOT EXISTS "${destination}")
      file(MAKE_DIRECTORY "${destination}")
    endif()

    if(EXISTS "${file}")
      # determine link name for file including destination path
      get_filename_component(filename "${file}" NAME)
      set(symlink "${destination}/${filename}")
      _ament_cmake_symlink_install_create_symlink("${file}" "${symlink}")
    else()
      if(NOT ARG_OPTIONAL)
        message(FATAL_ERROR
          "ament_cmake_symlink_install_targets() can't find '${file}'")
      endif()
    endif()
  endforeach()
endfunction()

function(_ament_cmake_symlink_install_create_symlink absolute_file symlink)
  # register symlink for being removed during install step
  file(APPEND "${CMAKE_CURRENT_BINARY_DIR}/symlink_install_manifest.txt"
    "${symlink}\n")

  # avoid any work if correct symlink is already in place
  if(EXISTS "${symlink}" AND IS_SYMLINK "${symlink}")
    get_filename_component(destination "${symlink}" REALPATH)
    get_filename_component(real_absolute_file "${absolute_file}" REALPATH)
    if(destination STREQUAL real_absolute_file)
      message(STATUS "Up-to-date symlink: ${symlink}")
      return()
    endif()
  endif()

  message(STATUS "Symlinking: ${symlink}")
  if(EXISTS "${symlink}" OR IS_SYMLINK "${symlink}")
    file(REMOVE "${symlink}")
  endif()

  execute_process(
    COMMAND "/usr/bin/cmake" "-E" "create_symlink"
      "${absolute_file}"
      "${symlink}"
  )
  # the CMake command does not provide a return code so check manually
  if(NOT EXISTS "${symlink}" OR NOT IS_SYMLINK "${symlink}")
    get_filename_component(destination "${symlink}" REALPATH)
    message(FATAL_ERROR
      "Could not create symlink '${symlink}' pointing to '${absolute_file}'")
  endif()
endfunction()

# end of template

message(STATUS "Execute custom install script")

# begin of custom install code

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/ament_cmake_index/share/ament_index/resource_index/rosidl_interfaces/custom_msgs" "DESTINATION" "share/ament_index/resource_index/rosidl_interfaces")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/ament_cmake_index/share/ament_index/resource_index/rosidl_interfaces/custom_msgs" "DESTINATION" "share/ament_index/resource_index/rosidl_interfaces")

# install(DIRECTORY "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_generator_c/custom_msgs/" "DESTINATION" "include/custom_msgs" "PATTERN" "*.h")
ament_cmake_symlink_install_directory("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" DIRECTORY "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_generator_c/custom_msgs/" "DESTINATION" "include/custom_msgs" "PATTERN" "*.h")

# install(FILES "/opt/ros/foxy/lib/python3.8/site-packages/ament_package/template/environment_hook/library_path.sh" "DESTINATION" "share/custom_msgs/environment")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/opt/ros/foxy/lib/python3.8/site-packages/ament_package/template/environment_hook/library_path.sh" "DESTINATION" "share/custom_msgs/environment")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/ament_cmake_environment_hooks/library_path.dsv" "DESTINATION" "share/custom_msgs/environment")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/ament_cmake_environment_hooks/library_path.dsv" "DESTINATION" "share/custom_msgs/environment")

# install(DIRECTORY "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_typesupport_fastrtps_c/custom_msgs/" "DESTINATION" "include/custom_msgs" "PATTERN_EXCLUDE" "*.cpp")
ament_cmake_symlink_install_directory("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" DIRECTORY "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_typesupport_fastrtps_c/custom_msgs/" "DESTINATION" "include/custom_msgs" "PATTERN_EXCLUDE" "*.cpp")

# install("TARGETS" "custom_msgs__rosidl_typesupport_fastrtps_c" "ARCHIVE_DESTINATION" "lib" "LIBRARY_DESTINATION" "lib" "RUNTIME_DESTINATION" "bin")
include("/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/ament_cmake_symlink_install_targets_0_${CMAKE_INSTALL_CONFIG_NAME}.cmake")

# install(DIRECTORY "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_typesupport_fastrtps_cpp/custom_msgs/" "DESTINATION" "include/custom_msgs" "PATTERN_EXCLUDE" "*.cpp")
ament_cmake_symlink_install_directory("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" DIRECTORY "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_typesupport_fastrtps_cpp/custom_msgs/" "DESTINATION" "include/custom_msgs" "PATTERN_EXCLUDE" "*.cpp")

# install("TARGETS" "custom_msgs__rosidl_typesupport_fastrtps_cpp" "ARCHIVE_DESTINATION" "lib" "LIBRARY_DESTINATION" "lib" "RUNTIME_DESTINATION" "bin")
include("/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/ament_cmake_symlink_install_targets_1_${CMAKE_INSTALL_CONFIG_NAME}.cmake")

# install(DIRECTORY "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_typesupport_introspection_c/custom_msgs/" "DESTINATION" "include/custom_msgs" "PATTERN" "*.h")
ament_cmake_symlink_install_directory("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" DIRECTORY "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_typesupport_introspection_c/custom_msgs/" "DESTINATION" "include/custom_msgs" "PATTERN" "*.h")

# install(DIRECTORY "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_generator_cpp/custom_msgs/" "DESTINATION" "include/custom_msgs" "PATTERN" "*.hpp")
ament_cmake_symlink_install_directory("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" DIRECTORY "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_generator_cpp/custom_msgs/" "DESTINATION" "include/custom_msgs" "PATTERN" "*.hpp")

# install(DIRECTORY "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_typesupport_introspection_cpp/custom_msgs/" "DESTINATION" "include/custom_msgs" "PATTERN" "*.hpp")
ament_cmake_symlink_install_directory("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" DIRECTORY "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_typesupport_introspection_cpp/custom_msgs/" "DESTINATION" "include/custom_msgs" "PATTERN" "*.hpp")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/ament_cmake_environment_hooks/pythonpath.sh" "DESTINATION" "share/custom_msgs/environment")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/ament_cmake_environment_hooks/pythonpath.sh" "DESTINATION" "share/custom_msgs/environment")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/ament_cmake_environment_hooks/pythonpath.dsv" "DESTINATION" "share/custom_msgs/environment")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/ament_cmake_environment_hooks/pythonpath.dsv" "DESTINATION" "share/custom_msgs/environment")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_generator_py/custom_msgs/__init__.py" "DESTINATION" "lib/python3.8/site-packages/custom_msgs")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_generator_py/custom_msgs/__init__.py" "DESTINATION" "lib/python3.8/site-packages/custom_msgs")

# install(DIRECTORY "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_generator_py/custom_msgs/msg/" "DESTINATION" "lib/python3.8/site-packages/custom_msgs/msg" "PATTERN" "*.py")
ament_cmake_symlink_install_directory("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" DIRECTORY "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_generator_py/custom_msgs/msg/" "DESTINATION" "lib/python3.8/site-packages/custom_msgs/msg" "PATTERN" "*.py")

# install(DIRECTORY "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_generator_py/custom_msgs/srv/" "DESTINATION" "lib/python3.8/site-packages/custom_msgs/srv" "PATTERN" "*.py")
ament_cmake_symlink_install_directory("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" DIRECTORY "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_generator_py/custom_msgs/srv/" "DESTINATION" "lib/python3.8/site-packages/custom_msgs/srv" "PATTERN" "*.py")

# install("TARGETS" "custom_msgs__rosidl_typesupport_fastrtps_c__pyext" "DESTINATION" "lib/python3.8/site-packages/custom_msgs")
include("/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/ament_cmake_symlink_install_targets_2_${CMAKE_INSTALL_CONFIG_NAME}.cmake")

# install("TARGETS" "custom_msgs__rosidl_typesupport_introspection_c__pyext" "DESTINATION" "lib/python3.8/site-packages/custom_msgs")
include("/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/ament_cmake_symlink_install_targets_3_${CMAKE_INSTALL_CONFIG_NAME}.cmake")

# install("TARGETS" "custom_msgs__rosidl_typesupport_c__pyext" "DESTINATION" "lib/python3.8/site-packages/custom_msgs")
include("/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/ament_cmake_symlink_install_targets_4_${CMAKE_INSTALL_CONFIG_NAME}.cmake")

# install("TARGETS" "custom_msgs__python" "ARCHIVE_DESTINATION" "lib" "LIBRARY_DESTINATION" "lib" "RUNTIME_DESTINATION" "bin")
include("/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/ament_cmake_symlink_install_targets_5_${CMAKE_INSTALL_CONFIG_NAME}.cmake")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/Array.idl" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/Array.idl" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/AdrAllStatus.idl" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/AdrAllStatus.idl" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/CurveFit.idl" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/CurveFit.idl" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/LidarMsg.idl" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/LidarMsg.idl" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/CamToDM.idl" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/CamToDM.idl" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/DebugRawArray.idl" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/DebugRawArray.idl" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/DetectToDM.idl" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/DetectToDM.idl" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/Object.idl" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/Object.idl" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/IMUOut.idl" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/IMUOut.idl" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/VehicleControlIn.idl" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/VehicleControlIn.idl" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/VehicleInfoOut.idl" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/VehicleInfoOut.idl" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/GPSOut.idl" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/GPSOut.idl" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/ObjectCurrent.idl" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/ObjectCurrent.idl" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/ObjectInter.idl" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/ObjectInter.idl" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/ObjectLeft.idl" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/ObjectLeft.idl" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/ObjectRight.idl" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/ObjectRight.idl" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/ObjectInterLeft.idl" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/ObjectInterLeft.idl" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SignalLightIn.idl" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SignalLightIn.idl" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/Paths.idl" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/Paths.idl" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/PathsMultiArray.idl" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/PathsMultiArray.idl" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/AroundPaths.idl" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/AroundPaths.idl" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SpList.idl" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SpList.idl" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SaveCAN342.idl" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SaveCAN342.idl" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SaveCAN343.idl" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SaveCAN343.idl" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SaveCAN409.idl" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SaveCAN409.idl" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SaveCAN515.idl" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SaveCAN515.idl" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SaveCAN516.idl" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SaveCAN516.idl" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SaveCAN517.idl" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SaveCAN517.idl" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SaveCAN518.idl" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SaveCAN518.idl" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SaveCAN519.idl" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SaveCAN519.idl" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SaveCAN520.idl" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SaveCAN520.idl" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SaveCAN521.idl" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SaveCAN521.idl" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SaveCAN529.idl" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SaveCAN529.idl" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SaveCAN1814.idl" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SaveCAN1814.idl" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SaveCAN1808.idl" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SaveCAN1808.idl" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SaveCAN1809.idl" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SaveCAN1809.idl" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SaveCAN1810.idl" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SaveCAN1810.idl" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SaveCAN1811.idl" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SaveCAN1811.idl" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SaveCAN1812.idl" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SaveCAN1812.idl" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SaveCAN1817.idl" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SaveCAN1817.idl" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/VehicleCANmain.idl" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/VehicleCANmain.idl" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SaveRadarCAN301.idl" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SaveRadarCAN301.idl" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SaveRadarCAN349.idl" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SaveRadarCAN349.idl" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SaveRadarCAN342.idl" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SaveRadarCAN342.idl" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SaveRadarCAN326.idl" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SaveRadarCAN326.idl" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SaveRadarCAN315.idl" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SaveRadarCAN315.idl" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SaveRadarCAN318.idl" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SaveRadarCAN318.idl" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SaveRadarCAN337.idl" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SaveRadarCAN337.idl" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SaveRadarCAN322.idl" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SaveRadarCAN322.idl" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SaveRadarCAN295.idl" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SaveRadarCAN295.idl" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SaveRadarCAN288.idl" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SaveRadarCAN288.idl" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SaveRadarCAN350.idl" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SaveRadarCAN350.idl" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SaveRadarCAN304.idl" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SaveRadarCAN304.idl" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SaveRadarCAN332.idl" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SaveRadarCAN332.idl" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SaveRadarCAN312.idl" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SaveRadarCAN312.idl" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SaveRadarCAN310.idl" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SaveRadarCAN310.idl" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SaveRadarCAN308.idl" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SaveRadarCAN308.idl" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SaveRadarCAN313.idl" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SaveRadarCAN313.idl" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SaveRadarCAN343.idl" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SaveRadarCAN343.idl" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SaveRadarCAN335.idl" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SaveRadarCAN335.idl" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SaveRadarCAN289.idl" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SaveRadarCAN289.idl" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SaveRadarCAN351.idl" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SaveRadarCAN351.idl" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SaveRadarCAN311.idl" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SaveRadarCAN311.idl" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SaveRadarCAN306.idl" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SaveRadarCAN306.idl" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SaveRadarCAN291.idl" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SaveRadarCAN291.idl" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SaveRadarCAN327.idl" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SaveRadarCAN327.idl" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SaveRadarCAN309.idl" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SaveRadarCAN309.idl" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SaveRadarCAN320.idl" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SaveRadarCAN320.idl" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SaveRadarCAN334.idl" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SaveRadarCAN334.idl" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SaveRadarCAN338.idl" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SaveRadarCAN338.idl" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SaveRadarCAN319.idl" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SaveRadarCAN319.idl" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SaveRadarCAN345.idl" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SaveRadarCAN345.idl" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SaveRadarCAN323.idl" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SaveRadarCAN323.idl" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SaveRadarCAN302.idl" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SaveRadarCAN302.idl" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SaveRadarCAN316.idl" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SaveRadarCAN316.idl" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SaveRadarCAN305.idl" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SaveRadarCAN305.idl" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SaveRadarCAN298.idl" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SaveRadarCAN298.idl" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SaveRadarCAN347.idl" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SaveRadarCAN347.idl" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SaveRadarCAN333.idl" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SaveRadarCAN333.idl" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SaveRadarCAN296.idl" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SaveRadarCAN296.idl" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SaveRadarCAN299.idl" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SaveRadarCAN299.idl" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SaveRadarCAN331.idl" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SaveRadarCAN331.idl" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SaveRadarCAN290.idl" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SaveRadarCAN290.idl" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SaveRadarCAN297.idl" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SaveRadarCAN297.idl" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SaveRadarCAN307.idl" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SaveRadarCAN307.idl" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SaveRadarCAN294.idl" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SaveRadarCAN294.idl" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SaveRadarCAN330.idl" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SaveRadarCAN330.idl" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SaveRadarCAN339.idl" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SaveRadarCAN339.idl" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SaveRadarCAN341.idl" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SaveRadarCAN341.idl" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SaveRadarCAN340.idl" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SaveRadarCAN340.idl" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SaveRadarCAN329.idl" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SaveRadarCAN329.idl" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SaveRadarCAN348.idl" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SaveRadarCAN348.idl" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SaveRadarCAN292.idl" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SaveRadarCAN292.idl" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SaveRadarCAN336.idl" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SaveRadarCAN336.idl" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SaveRadarCAN317.idl" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SaveRadarCAN317.idl" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SaveRadarCAN303.idl" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SaveRadarCAN303.idl" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SaveRadarCAN321.idl" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SaveRadarCAN321.idl" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SaveRadarCAN328.idl" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SaveRadarCAN328.idl" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SaveRadarCAN314.idl" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SaveRadarCAN314.idl" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SaveRadarCAN325.idl" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SaveRadarCAN325.idl" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SaveRadarCAN324.idl" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SaveRadarCAN324.idl" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SaveRadarCAN346.idl" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SaveRadarCAN346.idl" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SaveRadarCAN344.idl" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SaveRadarCAN344.idl" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SaveRadarCAN293.idl" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SaveRadarCAN293.idl" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SaveRadarCAN300.idl" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SaveRadarCAN300.idl" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SaveRadarCAN257.idl" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SaveRadarCAN257.idl" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SaveRadarCAN32.idl" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SaveRadarCAN32.idl" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/NiroCAN272.idl" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/NiroCAN272.idl" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/NiroCAN304.idl" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/NiroCAN304.idl" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/NiroCAN368.idl" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/NiroCAN368.idl" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/NiroCAN512.idl" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/NiroCAN512.idl" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/NiroCAN528.idl" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/NiroCAN528.idl" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/NiroCAN544.idl" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/NiroCAN544.idl" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/NiroCAN560.idl" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/NiroCAN560.idl" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/NiroCAN576.idl" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/NiroCAN576.idl" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/NiroCAN608.idl" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/NiroCAN608.idl" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/NiroCAN640.idl" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/NiroCAN640.idl" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/NiroCAN656.idl" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/NiroCAN656.idl" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/NiroCAN896.idl" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/NiroCAN896.idl" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/NiroCAN1280.idl" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/NiroCAN1280.idl" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/NiroCAN1312.idl" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/NiroCAN1312.idl" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/NiroCAN1552.idl" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/NiroCAN1552.idl" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/NiroCAN1553.idl" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/NiroCAN1553.idl" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/NiroCAN1568.idl" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/NiroCAN1568.idl" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/NiroCAN1569.idl" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/NiroCAN1569.idl" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SbgCAN310.idl" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SbgCAN310.idl" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SbgCAN292.idl" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SbgCAN292.idl" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SbgCAN311.idl" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SbgCAN311.idl" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SbgCAN518.idl" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SbgCAN518.idl" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SbgCAN313.idl" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SbgCAN313.idl" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SbgCAN376.idl" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SbgCAN376.idl" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SbgCAN338.idl" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SbgCAN338.idl" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SbgCAN273.idl" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SbgCAN273.idl" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SbgCAN369.idl" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SbgCAN369.idl" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SbgCAN373.idl" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SbgCAN373.idl" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SbgCAN368.idl" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SbgCAN368.idl" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SbgCAN272.idl" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SbgCAN272.idl" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SbgCAN290.idl" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SbgCAN290.idl" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SbgCAN291.idl" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SbgCAN291.idl" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SbgCAN336.idl" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SbgCAN336.idl" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SbgCAN371.idl" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SbgCAN371.idl" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SbgCAN307.idl" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SbgCAN307.idl" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SbgCAN355.idl" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SbgCAN355.idl" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SbgCAN514.idl" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SbgCAN514.idl" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SbgCAN289.idl" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SbgCAN289.idl" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SbgCAN258.idl" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SbgCAN258.idl" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SbgCAN372.idl" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SbgCAN372.idl" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SbgCAN519.idl" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SbgCAN519.idl" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SbgCAN308.idl" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SbgCAN308.idl" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SbgCAN288.idl" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SbgCAN288.idl" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SbgCAN337.idl" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SbgCAN337.idl" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SbgCAN513.idl" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SbgCAN513.idl" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SbgCAN352.idl" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SbgCAN352.idl" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SbgCAN312.idl" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SbgCAN312.idl" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SbgCAN257.idl" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SbgCAN257.idl" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SbgCAN375.idl" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SbgCAN375.idl" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SbgCAN306.idl" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SbgCAN306.idl" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SbgCAN512.idl" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SbgCAN512.idl" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SbgCAN353.idl" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SbgCAN353.idl" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SbgCAN354.idl" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SbgCAN354.idl" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SbgCAN256.idl" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SbgCAN256.idl" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SbgCAN544.idl" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SbgCAN544.idl" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SbgCAN370.idl" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SbgCAN370.idl" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SbgCAN309.idl" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SbgCAN309.idl" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SbgCAN304.idl" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SbgCAN304.idl" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SbgCAN515.idl" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SbgCAN515.idl" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SbgCAN374.idl" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SbgCAN374.idl" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SbgCAN377.idl" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SbgCAN377.idl" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SbgCAN305.idl" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SbgCAN305.idl" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SbgCAN356.idl" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SbgCAN356.idl" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SbgCAN768.idl" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/msg/SbgCAN768.idl" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/srv/GetBezier.idl" "DESTINATION" "share/custom_msgs/srv")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_adapter/custom_msgs/srv/GetBezier.idl" "DESTINATION" "share/custom_msgs/srv")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/Array.msg" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/Array.msg" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/AdrAllStatus.msg" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/AdrAllStatus.msg" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/CurveFit.msg" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/CurveFit.msg" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/LidarMsg.msg" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/LidarMsg.msg" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/CamToDM.msg" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/CamToDM.msg" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/DebugRawArray.msg" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/DebugRawArray.msg" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/DetectToDM.msg" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/DetectToDM.msg" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/Object.msg" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/Object.msg" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/IMUOut.msg" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/IMUOut.msg" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/VehicleControlIn.msg" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/VehicleControlIn.msg" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/VehicleInfoOut.msg" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/VehicleInfoOut.msg" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/GPSOut.msg" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/GPSOut.msg" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/ObjectCurrent.msg" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/ObjectCurrent.msg" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/ObjectInter.msg" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/ObjectInter.msg" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/ObjectLeft.msg" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/ObjectLeft.msg" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/ObjectRight.msg" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/ObjectRight.msg" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/ObjectInterLeft.msg" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/ObjectInterLeft.msg" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SignalLightIn.msg" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SignalLightIn.msg" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/Paths.msg" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/Paths.msg" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/PathsMultiArray.msg" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/PathsMultiArray.msg" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/AroundPaths.msg" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/AroundPaths.msg" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SpList.msg" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SpList.msg" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SaveCAN342.msg" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SaveCAN342.msg" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SaveCAN343.msg" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SaveCAN343.msg" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SaveCAN409.msg" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SaveCAN409.msg" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SaveCAN515.msg" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SaveCAN515.msg" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SaveCAN516.msg" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SaveCAN516.msg" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SaveCAN517.msg" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SaveCAN517.msg" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SaveCAN518.msg" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SaveCAN518.msg" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SaveCAN519.msg" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SaveCAN519.msg" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SaveCAN520.msg" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SaveCAN520.msg" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SaveCAN521.msg" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SaveCAN521.msg" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SaveCAN529.msg" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SaveCAN529.msg" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SaveCAN1814.msg" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SaveCAN1814.msg" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SaveCAN1808.msg" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SaveCAN1808.msg" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SaveCAN1809.msg" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SaveCAN1809.msg" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SaveCAN1810.msg" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SaveCAN1810.msg" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SaveCAN1811.msg" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SaveCAN1811.msg" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SaveCAN1812.msg" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SaveCAN1812.msg" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SaveCAN1817.msg" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SaveCAN1817.msg" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/VehicleCANmain.msg" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/VehicleCANmain.msg" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SaveRadarCAN301.msg" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SaveRadarCAN301.msg" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SaveRadarCAN349.msg" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SaveRadarCAN349.msg" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SaveRadarCAN342.msg" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SaveRadarCAN342.msg" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SaveRadarCAN326.msg" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SaveRadarCAN326.msg" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SaveRadarCAN315.msg" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SaveRadarCAN315.msg" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SaveRadarCAN318.msg" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SaveRadarCAN318.msg" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SaveRadarCAN337.msg" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SaveRadarCAN337.msg" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SaveRadarCAN322.msg" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SaveRadarCAN322.msg" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SaveRadarCAN295.msg" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SaveRadarCAN295.msg" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SaveRadarCAN288.msg" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SaveRadarCAN288.msg" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SaveRadarCAN350.msg" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SaveRadarCAN350.msg" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SaveRadarCAN304.msg" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SaveRadarCAN304.msg" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SaveRadarCAN332.msg" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SaveRadarCAN332.msg" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SaveRadarCAN312.msg" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SaveRadarCAN312.msg" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SaveRadarCAN310.msg" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SaveRadarCAN310.msg" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SaveRadarCAN308.msg" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SaveRadarCAN308.msg" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SaveRadarCAN313.msg" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SaveRadarCAN313.msg" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SaveRadarCAN343.msg" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SaveRadarCAN343.msg" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SaveRadarCAN335.msg" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SaveRadarCAN335.msg" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SaveRadarCAN289.msg" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SaveRadarCAN289.msg" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SaveRadarCAN351.msg" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SaveRadarCAN351.msg" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SaveRadarCAN311.msg" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SaveRadarCAN311.msg" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SaveRadarCAN306.msg" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SaveRadarCAN306.msg" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SaveRadarCAN291.msg" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SaveRadarCAN291.msg" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SaveRadarCAN327.msg" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SaveRadarCAN327.msg" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SaveRadarCAN309.msg" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SaveRadarCAN309.msg" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SaveRadarCAN320.msg" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SaveRadarCAN320.msg" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SaveRadarCAN334.msg" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SaveRadarCAN334.msg" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SaveRadarCAN338.msg" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SaveRadarCAN338.msg" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SaveRadarCAN319.msg" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SaveRadarCAN319.msg" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SaveRadarCAN345.msg" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SaveRadarCAN345.msg" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SaveRadarCAN323.msg" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SaveRadarCAN323.msg" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SaveRadarCAN302.msg" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SaveRadarCAN302.msg" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SaveRadarCAN316.msg" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SaveRadarCAN316.msg" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SaveRadarCAN305.msg" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SaveRadarCAN305.msg" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SaveRadarCAN298.msg" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SaveRadarCAN298.msg" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SaveRadarCAN347.msg" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SaveRadarCAN347.msg" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SaveRadarCAN333.msg" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SaveRadarCAN333.msg" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SaveRadarCAN296.msg" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SaveRadarCAN296.msg" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SaveRadarCAN299.msg" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SaveRadarCAN299.msg" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SaveRadarCAN331.msg" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SaveRadarCAN331.msg" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SaveRadarCAN290.msg" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SaveRadarCAN290.msg" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SaveRadarCAN297.msg" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SaveRadarCAN297.msg" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SaveRadarCAN307.msg" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SaveRadarCAN307.msg" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SaveRadarCAN294.msg" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SaveRadarCAN294.msg" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SaveRadarCAN330.msg" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SaveRadarCAN330.msg" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SaveRadarCAN339.msg" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SaveRadarCAN339.msg" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SaveRadarCAN341.msg" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SaveRadarCAN341.msg" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SaveRadarCAN340.msg" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SaveRadarCAN340.msg" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SaveRadarCAN329.msg" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SaveRadarCAN329.msg" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SaveRadarCAN348.msg" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SaveRadarCAN348.msg" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SaveRadarCAN292.msg" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SaveRadarCAN292.msg" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SaveRadarCAN336.msg" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SaveRadarCAN336.msg" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SaveRadarCAN317.msg" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SaveRadarCAN317.msg" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SaveRadarCAN303.msg" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SaveRadarCAN303.msg" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SaveRadarCAN321.msg" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SaveRadarCAN321.msg" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SaveRadarCAN328.msg" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SaveRadarCAN328.msg" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SaveRadarCAN314.msg" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SaveRadarCAN314.msg" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SaveRadarCAN325.msg" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SaveRadarCAN325.msg" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SaveRadarCAN324.msg" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SaveRadarCAN324.msg" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SaveRadarCAN346.msg" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SaveRadarCAN346.msg" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SaveRadarCAN344.msg" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SaveRadarCAN344.msg" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SaveRadarCAN293.msg" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SaveRadarCAN293.msg" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SaveRadarCAN300.msg" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SaveRadarCAN300.msg" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SaveRadarCAN257.msg" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SaveRadarCAN257.msg" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SaveRadarCAN32.msg" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SaveRadarCAN32.msg" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/NiroCAN272.msg" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/NiroCAN272.msg" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/NiroCAN304.msg" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/NiroCAN304.msg" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/NiroCAN368.msg" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/NiroCAN368.msg" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/NiroCAN512.msg" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/NiroCAN512.msg" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/NiroCAN528.msg" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/NiroCAN528.msg" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/NiroCAN544.msg" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/NiroCAN544.msg" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/NiroCAN560.msg" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/NiroCAN560.msg" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/NiroCAN576.msg" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/NiroCAN576.msg" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/NiroCAN608.msg" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/NiroCAN608.msg" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/NiroCAN640.msg" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/NiroCAN640.msg" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/NiroCAN656.msg" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/NiroCAN656.msg" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/NiroCAN896.msg" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/NiroCAN896.msg" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/NiroCAN1280.msg" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/NiroCAN1280.msg" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/NiroCAN1312.msg" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/NiroCAN1312.msg" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/NiroCAN1552.msg" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/NiroCAN1552.msg" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/NiroCAN1553.msg" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/NiroCAN1553.msg" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/NiroCAN1568.msg" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/NiroCAN1568.msg" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/NiroCAN1569.msg" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/NiroCAN1569.msg" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SbgCAN310.msg" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SbgCAN310.msg" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SbgCAN292.msg" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SbgCAN292.msg" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SbgCAN311.msg" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SbgCAN311.msg" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SbgCAN518.msg" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SbgCAN518.msg" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SbgCAN313.msg" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SbgCAN313.msg" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SbgCAN376.msg" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SbgCAN376.msg" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SbgCAN338.msg" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SbgCAN338.msg" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SbgCAN273.msg" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SbgCAN273.msg" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SbgCAN369.msg" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SbgCAN369.msg" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SbgCAN373.msg" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SbgCAN373.msg" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SbgCAN368.msg" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SbgCAN368.msg" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SbgCAN272.msg" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SbgCAN272.msg" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SbgCAN290.msg" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SbgCAN290.msg" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SbgCAN291.msg" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SbgCAN291.msg" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SbgCAN336.msg" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SbgCAN336.msg" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SbgCAN371.msg" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SbgCAN371.msg" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SbgCAN307.msg" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SbgCAN307.msg" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SbgCAN355.msg" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SbgCAN355.msg" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SbgCAN514.msg" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SbgCAN514.msg" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SbgCAN289.msg" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SbgCAN289.msg" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SbgCAN258.msg" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SbgCAN258.msg" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SbgCAN372.msg" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SbgCAN372.msg" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SbgCAN519.msg" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SbgCAN519.msg" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SbgCAN308.msg" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SbgCAN308.msg" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SbgCAN288.msg" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SbgCAN288.msg" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SbgCAN337.msg" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SbgCAN337.msg" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SbgCAN513.msg" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SbgCAN513.msg" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SbgCAN352.msg" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SbgCAN352.msg" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SbgCAN312.msg" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SbgCAN312.msg" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SbgCAN257.msg" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SbgCAN257.msg" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SbgCAN375.msg" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SbgCAN375.msg" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SbgCAN306.msg" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SbgCAN306.msg" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SbgCAN512.msg" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SbgCAN512.msg" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SbgCAN353.msg" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SbgCAN353.msg" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SbgCAN354.msg" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SbgCAN354.msg" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SbgCAN256.msg" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SbgCAN256.msg" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SbgCAN544.msg" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SbgCAN544.msg" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SbgCAN370.msg" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SbgCAN370.msg" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SbgCAN309.msg" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SbgCAN309.msg" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SbgCAN304.msg" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SbgCAN304.msg" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SbgCAN515.msg" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SbgCAN515.msg" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SbgCAN374.msg" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SbgCAN374.msg" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SbgCAN377.msg" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SbgCAN377.msg" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SbgCAN305.msg" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SbgCAN305.msg" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SbgCAN356.msg" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SbgCAN356.msg" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SbgCAN768.msg" "DESTINATION" "share/custom_msgs/msg")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/msg/SbgCAN768.msg" "DESTINATION" "share/custom_msgs/msg")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/srv/GetBezier.srv" "DESTINATION" "share/custom_msgs/srv")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/srv/GetBezier.srv" "DESTINATION" "share/custom_msgs/srv")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_cmake/srv/GetBezier_Request.msg" "DESTINATION" "share/custom_msgs/srv")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_cmake/srv/GetBezier_Request.msg" "DESTINATION" "share/custom_msgs/srv")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_cmake/srv/GetBezier_Response.msg" "DESTINATION" "share/custom_msgs/srv")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_cmake/srv/GetBezier_Response.msg" "DESTINATION" "share/custom_msgs/srv")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/ament_cmake_index/share/ament_index/resource_index/package_run_dependencies/custom_msgs" "DESTINATION" "share/ament_index/resource_index/package_run_dependencies")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/ament_cmake_index/share/ament_index/resource_index/package_run_dependencies/custom_msgs" "DESTINATION" "share/ament_index/resource_index/package_run_dependencies")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/ament_cmake_index/share/ament_index/resource_index/parent_prefix_path/custom_msgs" "DESTINATION" "share/ament_index/resource_index/parent_prefix_path")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/ament_cmake_index/share/ament_index/resource_index/parent_prefix_path/custom_msgs" "DESTINATION" "share/ament_index/resource_index/parent_prefix_path")

# install(FILES "/opt/ros/foxy/share/ament_cmake_core/cmake/environment_hooks/environment/ament_prefix_path.sh" "DESTINATION" "share/custom_msgs/environment")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/opt/ros/foxy/share/ament_cmake_core/cmake/environment_hooks/environment/ament_prefix_path.sh" "DESTINATION" "share/custom_msgs/environment")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/ament_cmake_environment_hooks/ament_prefix_path.dsv" "DESTINATION" "share/custom_msgs/environment")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/ament_cmake_environment_hooks/ament_prefix_path.dsv" "DESTINATION" "share/custom_msgs/environment")

# install(FILES "/opt/ros/foxy/share/ament_cmake_core/cmake/environment_hooks/environment/path.sh" "DESTINATION" "share/custom_msgs/environment")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/opt/ros/foxy/share/ament_cmake_core/cmake/environment_hooks/environment/path.sh" "DESTINATION" "share/custom_msgs/environment")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/ament_cmake_environment_hooks/path.dsv" "DESTINATION" "share/custom_msgs/environment")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/ament_cmake_environment_hooks/path.dsv" "DESTINATION" "share/custom_msgs/environment")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/ament_cmake_environment_hooks/local_setup.bash" "DESTINATION" "share/custom_msgs")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/ament_cmake_environment_hooks/local_setup.bash" "DESTINATION" "share/custom_msgs")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/ament_cmake_environment_hooks/local_setup.sh" "DESTINATION" "share/custom_msgs")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/ament_cmake_environment_hooks/local_setup.sh" "DESTINATION" "share/custom_msgs")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/ament_cmake_environment_hooks/local_setup.zsh" "DESTINATION" "share/custom_msgs")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/ament_cmake_environment_hooks/local_setup.zsh" "DESTINATION" "share/custom_msgs")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/ament_cmake_environment_hooks/local_setup.dsv" "DESTINATION" "share/custom_msgs")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/ament_cmake_environment_hooks/local_setup.dsv" "DESTINATION" "share/custom_msgs")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/ament_cmake_environment_hooks/package.dsv" "DESTINATION" "share/custom_msgs")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/ament_cmake_environment_hooks/package.dsv" "DESTINATION" "share/custom_msgs")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/ament_cmake_index/share/ament_index/resource_index/packages/custom_msgs" "DESTINATION" "share/ament_index/resource_index/packages")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/ament_cmake_index/share/ament_index/resource_index/packages/custom_msgs" "DESTINATION" "share/ament_index/resource_index/packages")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_cmake/rosidl_cmake-extras.cmake" "DESTINATION" "share/custom_msgs/cmake")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_cmake/rosidl_cmake-extras.cmake" "DESTINATION" "share/custom_msgs/cmake")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/ament_cmake_export_dependencies/ament_cmake_export_dependencies-extras.cmake" "DESTINATION" "share/custom_msgs/cmake")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/ament_cmake_export_dependencies/ament_cmake_export_dependencies-extras.cmake" "DESTINATION" "share/custom_msgs/cmake")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/ament_cmake_export_libraries/ament_cmake_export_libraries-extras.cmake" "DESTINATION" "share/custom_msgs/cmake")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/ament_cmake_export_libraries/ament_cmake_export_libraries-extras.cmake" "DESTINATION" "share/custom_msgs/cmake")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/ament_cmake_export_targets/ament_cmake_export_targets-extras.cmake" "DESTINATION" "share/custom_msgs/cmake")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/ament_cmake_export_targets/ament_cmake_export_targets-extras.cmake" "DESTINATION" "share/custom_msgs/cmake")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/ament_cmake_export_include_directories/ament_cmake_export_include_directories-extras.cmake" "DESTINATION" "share/custom_msgs/cmake")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/ament_cmake_export_include_directories/ament_cmake_export_include_directories-extras.cmake" "DESTINATION" "share/custom_msgs/cmake")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_cmake/rosidl_cmake_export_typesupport_libraries-extras.cmake" "DESTINATION" "share/custom_msgs/cmake")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_cmake/rosidl_cmake_export_typesupport_libraries-extras.cmake" "DESTINATION" "share/custom_msgs/cmake")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_cmake/rosidl_cmake_export_typesupport_targets-extras.cmake" "DESTINATION" "share/custom_msgs/cmake")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/rosidl_cmake/rosidl_cmake_export_typesupport_targets-extras.cmake" "DESTINATION" "share/custom_msgs/cmake")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/ament_cmake_core/custom_msgsConfig.cmake" "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/ament_cmake_core/custom_msgsConfig-version.cmake" "DESTINATION" "share/custom_msgs/cmake")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/ament_cmake_core/custom_msgsConfig.cmake" "/home/amlab/coop_ws/src/mot_radar/mot_radar/build/custom_msgs/ament_cmake_core/custom_msgsConfig-version.cmake" "DESTINATION" "share/custom_msgs/cmake")

# install(FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/package.xml" "DESTINATION" "share/custom_msgs")
ament_cmake_symlink_install_files("/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs" FILES "/home/amlab/coop_ws/src/mot_radar/mot_radar/custom_msgs/package.xml" "DESTINATION" "share/custom_msgs")
