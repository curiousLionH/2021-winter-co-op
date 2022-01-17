// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from custom_msgs:msg/SaveCAN1808.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__SAVE_CAN1808__FUNCTIONS_H_
#define CUSTOM_MSGS__MSG__DETAIL__SAVE_CAN1808__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "custom_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "custom_msgs/msg/detail/save_can1808__struct.h"

/// Initialize msg/SaveCAN1808 message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * custom_msgs__msg__SaveCAN1808
 * )) before or use
 * custom_msgs__msg__SaveCAN1808__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_msgs
bool
custom_msgs__msg__SaveCAN1808__init(custom_msgs__msg__SaveCAN1808 * msg);

/// Finalize msg/SaveCAN1808 message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_msgs
void
custom_msgs__msg__SaveCAN1808__fini(custom_msgs__msg__SaveCAN1808 * msg);

/// Create msg/SaveCAN1808 message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * custom_msgs__msg__SaveCAN1808__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_msgs
custom_msgs__msg__SaveCAN1808 *
custom_msgs__msg__SaveCAN1808__create();

/// Destroy msg/SaveCAN1808 message.
/**
 * It calls
 * custom_msgs__msg__SaveCAN1808__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_msgs
void
custom_msgs__msg__SaveCAN1808__destroy(custom_msgs__msg__SaveCAN1808 * msg);


/// Initialize array of msg/SaveCAN1808 messages.
/**
 * It allocates the memory for the number of elements and calls
 * custom_msgs__msg__SaveCAN1808__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_msgs
bool
custom_msgs__msg__SaveCAN1808__Sequence__init(custom_msgs__msg__SaveCAN1808__Sequence * array, size_t size);

/// Finalize array of msg/SaveCAN1808 messages.
/**
 * It calls
 * custom_msgs__msg__SaveCAN1808__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_msgs
void
custom_msgs__msg__SaveCAN1808__Sequence__fini(custom_msgs__msg__SaveCAN1808__Sequence * array);

/// Create array of msg/SaveCAN1808 messages.
/**
 * It allocates the memory for the array and calls
 * custom_msgs__msg__SaveCAN1808__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_msgs
custom_msgs__msg__SaveCAN1808__Sequence *
custom_msgs__msg__SaveCAN1808__Sequence__create(size_t size);

/// Destroy array of msg/SaveCAN1808 messages.
/**
 * It calls
 * custom_msgs__msg__SaveCAN1808__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_msgs
void
custom_msgs__msg__SaveCAN1808__Sequence__destroy(custom_msgs__msg__SaveCAN1808__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_MSGS__MSG__DETAIL__SAVE_CAN1808__FUNCTIONS_H_
