// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from custom_msgs:msg/NiroCAN1552.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__NIRO_CAN1552__FUNCTIONS_H_
#define CUSTOM_MSGS__MSG__DETAIL__NIRO_CAN1552__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "custom_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "custom_msgs/msg/detail/niro_can1552__struct.h"

/// Initialize msg/NiroCAN1552 message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * custom_msgs__msg__NiroCAN1552
 * )) before or use
 * custom_msgs__msg__NiroCAN1552__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_msgs
bool
custom_msgs__msg__NiroCAN1552__init(custom_msgs__msg__NiroCAN1552 * msg);

/// Finalize msg/NiroCAN1552 message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_msgs
void
custom_msgs__msg__NiroCAN1552__fini(custom_msgs__msg__NiroCAN1552 * msg);

/// Create msg/NiroCAN1552 message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * custom_msgs__msg__NiroCAN1552__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_msgs
custom_msgs__msg__NiroCAN1552 *
custom_msgs__msg__NiroCAN1552__create();

/// Destroy msg/NiroCAN1552 message.
/**
 * It calls
 * custom_msgs__msg__NiroCAN1552__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_msgs
void
custom_msgs__msg__NiroCAN1552__destroy(custom_msgs__msg__NiroCAN1552 * msg);


/// Initialize array of msg/NiroCAN1552 messages.
/**
 * It allocates the memory for the number of elements and calls
 * custom_msgs__msg__NiroCAN1552__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_msgs
bool
custom_msgs__msg__NiroCAN1552__Sequence__init(custom_msgs__msg__NiroCAN1552__Sequence * array, size_t size);

/// Finalize array of msg/NiroCAN1552 messages.
/**
 * It calls
 * custom_msgs__msg__NiroCAN1552__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_msgs
void
custom_msgs__msg__NiroCAN1552__Sequence__fini(custom_msgs__msg__NiroCAN1552__Sequence * array);

/// Create array of msg/NiroCAN1552 messages.
/**
 * It allocates the memory for the array and calls
 * custom_msgs__msg__NiroCAN1552__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_msgs
custom_msgs__msg__NiroCAN1552__Sequence *
custom_msgs__msg__NiroCAN1552__Sequence__create(size_t size);

/// Destroy array of msg/NiroCAN1552 messages.
/**
 * It calls
 * custom_msgs__msg__NiroCAN1552__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_msgs
void
custom_msgs__msg__NiroCAN1552__Sequence__destroy(custom_msgs__msg__NiroCAN1552__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_MSGS__MSG__DETAIL__NIRO_CAN1552__FUNCTIONS_H_