cmake_minimum_required(VERSION 3.5)
project(custom_msgs)

# Default to C99
if(NOT CMAKE_C_STANDARD)
  set(CMAKE_C_STANDARD 99)
endif()

# Default to C++14
if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 14)
endif()

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rosidl_default_generators REQUIRED)
find_package(std_msgs REQUIRED)


set(msg_files
  "msg/Array.msg"
  "msg/AdrAllStatus.msg"
  "msg/CurveFit.msg"
  "msg/LidarMsg.msg"
  "msg/CamToDM.msg"
  "msg/DebugRawArray.msg"
  "msg/DetectToDM.msg"
  "msg/Object.msg"
  "msg/IMUOut.msg"
  "msg/VehicleControlIn.msg"
  "msg/VehicleInfoOut.msg"
  "msg/GPSOut.msg"
  "msg/ObjectCurrent.msg"
  "msg/ObjectInter.msg"
  "msg/ObjectLeft.msg"
  "msg/ObjectRight.msg"
  "msg/ObjectInterLeft.msg"
  "msg/SignalLightIn.msg"
  "msg/Paths.msg"
  "msg/PathsMultiArray.msg"
  "msg/AroundPaths.msg"
  "msg/SpList.msg"
  "msg/SaveCAN342.msg"
  "msg/SaveCAN343.msg"
  "msg/SaveCAN409.msg"
  "msg/SaveCAN515.msg"
  "msg/SaveCAN516.msg"
  "msg/SaveCAN517.msg"
  "msg/SaveCAN518.msg"
  "msg/SaveCAN519.msg"
  "msg/SaveCAN520.msg"
  "msg/SaveCAN521.msg"
  "msg/SaveCAN529.msg"
  "msg/SaveCAN1814.msg"
  "msg/SaveCAN1808.msg"
  "msg/SaveCAN1809.msg"
  "msg/SaveCAN1810.msg"
  "msg/SaveCAN1811.msg"
  "msg/SaveCAN1812.msg"
  "msg/SaveCAN1817.msg"
  "msg/VehicleCANmain.msg"
  "msg/SaveRadarCAN301.msg"
  "msg/SaveRadarCAN349.msg"
  "msg/SaveRadarCAN342.msg"
  "msg/SaveRadarCAN326.msg"
  "msg/SaveRadarCAN315.msg"
  "msg/SaveRadarCAN318.msg"
  "msg/SaveRadarCAN337.msg"
  "msg/SaveRadarCAN322.msg"
  "msg/SaveRadarCAN295.msg"
  "msg/SaveRadarCAN288.msg"
  "msg/SaveRadarCAN350.msg"
  "msg/SaveRadarCAN304.msg"
  "msg/SaveRadarCAN332.msg"
  "msg/SaveRadarCAN312.msg"
  "msg/SaveRadarCAN310.msg"
  "msg/SaveRadarCAN308.msg"
  "msg/SaveRadarCAN313.msg"
  "msg/SaveRadarCAN343.msg"
  "msg/SaveRadarCAN335.msg"
  "msg/SaveRadarCAN289.msg"
  "msg/SaveRadarCAN351.msg"
  "msg/SaveRadarCAN311.msg"
  "msg/SaveRadarCAN306.msg"
  "msg/SaveRadarCAN291.msg"
  "msg/SaveRadarCAN327.msg"
  "msg/SaveRadarCAN309.msg"
  "msg/SaveRadarCAN320.msg"
  "msg/SaveRadarCAN334.msg"
  "msg/SaveRadarCAN338.msg"
  "msg/SaveRadarCAN319.msg"
  "msg/SaveRadarCAN345.msg"
  "msg/SaveRadarCAN323.msg"
  "msg/SaveRadarCAN302.msg"
  "msg/SaveRadarCAN316.msg"
  "msg/SaveRadarCAN305.msg"
  "msg/SaveRadarCAN298.msg"
  "msg/SaveRadarCAN347.msg"
  "msg/SaveRadarCAN333.msg"
  "msg/SaveRadarCAN296.msg"
  "msg/SaveRadarCAN299.msg"
  "msg/SaveRadarCAN331.msg"
  "msg/SaveRadarCAN290.msg"
  "msg/SaveRadarCAN297.msg"
  "msg/SaveRadarCAN307.msg"
  "msg/SaveRadarCAN294.msg"
  "msg/SaveRadarCAN330.msg"
  "msg/SaveRadarCAN339.msg"
  "msg/SaveRadarCAN341.msg"
  "msg/SaveRadarCAN340.msg"
  "msg/SaveRadarCAN329.msg"
  "msg/SaveRadarCAN348.msg"
  "msg/SaveRadarCAN292.msg"
  "msg/SaveRadarCAN336.msg"
  "msg/SaveRadarCAN317.msg"
  "msg/SaveRadarCAN303.msg"
  "msg/SaveRadarCAN321.msg"
  "msg/SaveRadarCAN328.msg"
  "msg/SaveRadarCAN314.msg"
  "msg/SaveRadarCAN325.msg"
  "msg/SaveRadarCAN324.msg"
  "msg/SaveRadarCAN346.msg"
  "msg/SaveRadarCAN344.msg"
  "msg/SaveRadarCAN293.msg"
  "msg/SaveRadarCAN300.msg"
  "msg/SaveRadarCAN257.msg"
  "msg/SaveRadarCAN32.msg"
  "msg/NiroCAN272.msg"
  "msg/NiroCAN304.msg"
  "msg/NiroCAN368.msg"
  "msg/NiroCAN512.msg"
  "msg/NiroCAN528.msg"
  "msg/NiroCAN544.msg"
  "msg/NiroCAN560.msg"
  "msg/NiroCAN576.msg"
  "msg/NiroCAN608.msg"
  "msg/NiroCAN640.msg"
  "msg/NiroCAN656.msg"
  "msg/NiroCAN896.msg"
  "msg/NiroCAN1280.msg"
  "msg/NiroCAN1312.msg"
  "msg/NiroCAN1552.msg"
  "msg/NiroCAN1553.msg"
  "msg/NiroCAN1568.msg"
  "msg/NiroCAN1569.msg"
  "msg/SbgCAN310.msg"
  "msg/SbgCAN292.msg"
  "msg/SbgCAN311.msg"
  "msg/SbgCAN518.msg"
  "msg/SbgCAN313.msg"
  "msg/SbgCAN376.msg"
  "msg/SbgCAN338.msg"
  "msg/SbgCAN273.msg"
  "msg/SbgCAN369.msg"
  "msg/SbgCAN373.msg"
  "msg/SbgCAN368.msg"
  "msg/SbgCAN272.msg"
  "msg/SbgCAN290.msg"
  "msg/SbgCAN291.msg"
  "msg/SbgCAN336.msg"
  "msg/SbgCAN371.msg"
  "msg/SbgCAN307.msg"
  "msg/SbgCAN355.msg"
  "msg/SbgCAN514.msg"
  "msg/SbgCAN289.msg"
  "msg/SbgCAN258.msg"
  "msg/SbgCAN372.msg"
  "msg/SbgCAN519.msg"
  "msg/SbgCAN308.msg"
  "msg/SbgCAN288.msg"
  "msg/SbgCAN337.msg"
  "msg/SbgCAN513.msg"
  "msg/SbgCAN352.msg"
  "msg/SbgCAN312.msg"
  "msg/SbgCAN257.msg"
  "msg/SbgCAN375.msg"
  "msg/SbgCAN306.msg"
  "msg/SbgCAN512.msg"
  "msg/SbgCAN353.msg"
  "msg/SbgCAN354.msg"
  "msg/SbgCAN256.msg"
  "msg/SbgCAN544.msg"
  "msg/SbgCAN370.msg"
  "msg/SbgCAN309.msg"
  "msg/SbgCAN304.msg"
  "msg/SbgCAN515.msg"
  "msg/SbgCAN374.msg"
  "msg/SbgCAN377.msg"
  "msg/SbgCAN305.msg"
  "msg/SbgCAN356.msg"
  "msg/SbgCAN768.msg"
)

set(srv_files
  "srv/GetBezier.srv"
)

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  ament_lint_auto_find_test_dependencies()
endif()


rosidl_generate_interfaces(${PROJECT_NAME}
  ${msg_files}
  ${srv_files}
  DEPENDENCIES std_msgs
  ADD_LINTER_TESTS
)

ament_export_dependencies(rosidl_default_runtime)
ament_package()
