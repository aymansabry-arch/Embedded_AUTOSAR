/**
 * @file    : Platform_Types.h
 * @version : 1.0.0
 * @brief   : Based on Autosar
 * @details : Implementation Of Digital Input/Output
 * @author  : Ayman Sabri Abo Eleneen
 */

/*==================================================================
 *      project             :   Autosar 4.0.0
 *      platfom             :   ARM
 *      peripheral          :   STM32F407
 *      AutoSar Version     :  4.0.0
 *      Autosar Revision    :  REV0000
 *      SoftWare Version    :  1.0.0
 * ==================================================================
 */

#ifndef PLATFORM_H
#define PLATFORM_H

/**
 * ===================================================================
 *                          Platform_File_Version_Informations
 * ===================================================================
 */

#define PLATFORM_VERSION_ID 123

#define PLATFORM_AS_RELEASE_MIGOR_VERSION 4
#define PLATFORM_AS_RELEASE_MINOR_VERSION 4
#define PLATFORM_AS_RELEASE_REVISION_VERSION 0

#define PLATFORM_SW_MIGOR_VERSION 1
#define PLATFORM_SW_MINOR_VERSION 0
#define PLATFORM_SW_PATCH_VERSION 0

/**
 * @brief : Indicating a 8 bit processor
 * @implements : CPU_TYPE_Enumeration
 */
#define CPU_TYPE_8 8

/**
 * @brief : Indicating a 16 bit processor
 * @implements : CPU_TYPE_Enumeration
 */
#define CPU_TYPE_16 16

/**
 * @brief : Indicating a 32 bit processor
 * @implements : CPU_TYPE_Enumeration
 */
#define CPU_TYPE_32 32

/**
 * @brief : Indicating a 32 bit processor
 * @implements : CPU_TYPE_Enumeration
 */
#define CPU_TYPE_64 64

/**
 * @brief : The most significant bit is the first bit of the bit sequence
 * @implements : CPU_BIT_ORDER
 */
#define MSB_FIRST 0x00

/**
 * @brief : The least significant bit is the first bit of the bit sequence
 * @implements : CPU_BIT_ORDER
 */
#define LSB_FIRST 0x01

/**
 * @brief : Within uint16, the high byte is located beforethe low byte
 * @implements : CPU_BYTE_ORDER
 */
#define STD_HIGH_FIRST 0x00

/**
 * @brief : Within uint16, the low byte is located beforethe high byte
 * @implements : CPU_BYTE_ORDER
 */
#define LOW_BYTE_FIRST 0x01

/**
 * @brief : Prosessor Type
 * @implements : This symbol shall be defined as #define having one of the values CPU_TYPE_8, CPU_TYPE_16,
CPU_TYPE_32 or CPU_TYPE_64 according to the platform.
*/
#define CPU_TYPE CPU_TYPE_64

/**
 * @brief : Bit Order
 * @implements : This symbol shall be defined as #define having one of the values MSB_FIRST or LSB_FIRST
according to the platform.
*/
#define CPU_BIT_ORDER()

/**
 * @brief :Byte Order
 * @implements : This symbol shall be defined as #define having one of the values CPU_TYPE_8, CPU_TYPE_16,
CPU_TYPE_32 or CPU_TYPE_64 according to the platform.
*/
#define CPU_BYTE_ORDER()

#ifndef TRUE
#define TRUE 1
#endif
#ifndef FALSE
#define FALSE 0
#endif
/**
 * ===============================================================
 *                          Structures and Other Types(8-16-32-64)
 * ===============================================================
 */

#if (CPU_TYPE == CPU_TYPE_64)
/**
 * @brief :  This standard AUTOSAR type shall be of 8 bit unsigned
 * @implements :boolean type
 */
typedef unsigned char boolean;

/**
 * @brief :  This standard AUTOSAR type shall be of 8 bit unsigned
 * @implements :uint8_type
 */
typedef unsigned char uint8;

/**
 * @brief :  This standard AUTOSAR type shall be of 16 bit unsigned
 * @implements :uint16_type
 */
typedef unsigned short uint16;

/**
 * @brief :  This standard AUTOSAR type shall be of 32 bit unsigned
 * @implements :uint32_type
 */
typedef unsigned int uint32;

/**
 * @brief :  This standard AUTOSAR type shall be of 64 bit unsigned
 * @implements :uint64_type
 */
typedef unsigned long long uint64;

/**
 * @brief :  This standard AUTOSAR type shall be of 8 bit signed
 * @implements :sint8_type
 */
typedef signed char sint8;

/**
 * @brief :  This standard AUTOSAR type shall be of 16 bit signed
 * @implements :sint16_type
 */
typedef signed short sint16;

/**
 * @brief :  This standard AUTOSAR type shall be of 32 bit signed
 * @implements :sint32_type
 */
typedef signed int sint32;

/**
 * @brief :  This standard AUTOSAR type shall be of 64 bit signed
 * @implements :sint64_type
 */
typedef signed long long sint64;

/**
 * @brief :  This standard AUTOSAR type shall be of 8 bit unsigned
 * @implements :uint8_least
 */
typedef unsigned char uint8_least;

/**
 * @brief :  This standard AUTOSAR type shall be of 16 bit unsigned
 * @implements :uint16_least
 */
typedef unsigned short uint16_least;

/**
 * @brief :  This standard AUTOSAR type shall be of 32 bit unsigned
 * @implements :uint32_least
 */
typedef unsigned int uint32_least;

/**
 * @brief :  This standard AUTOSAR type shall be of 8 bit signed
 * @implements :sint8_least
 */
typedef signed char sint8_least;

/**
 * @brief :  This standard AUTOSAR type shall be of 16 bit signed
 * @implements :sint16_least
 */
typedef signed short sint16_least;

/**
 * @brief :  This standard AUTOSAR type shall be of 32 bit signed
 * @implements :sint32_least
 */
typedef signed int sint32_least;

/**
 * @brief : 32bit long floating data type
 * @implements : float32
 */
typedef float float32;

/**
 * @brief : 64bit long floating data type
 * @implements : float64
 */
typedef double float64;

#elif (CPU_TYPE == CPU_TYPE_32)
/**
 * @brief :  This standard AUTOSAR type shall be of 8 bit unsigned
 * @implements :boolean type
 */
typedef unsigned char boolean;

/**
 * @brief :  This standard AUTOSAR type shall be of 8 bit unsigned
 * @implements :uint8_type
 */
typedef unsigned char uint8;

/**
 * @brief :  This standard AUTOSAR type shall be of 16 bit unsigned
 * @implements :uint16_type
 */
typedef unsigned short uint16;

/**
 * @brief :  This standard AUTOSAR type shall be of 32 bit unsigned
 * @implements :uint32_type
 */
typedef unsigned int uint32;

/**
 * @brief :  This standard AUTOSAR type shall be of 64 bit unsigned
 * @implements :uint64_type
 */
typedef unsigned long long uint64;

/**
 * @brief :  This standard AUTOSAR type shall be of 8 bit signed
 * @implements :sint8_type
 */
typedef signed char sint8;

/**
 * @brief :  This standard AUTOSAR type shall be of 16 bit signed
 * @implements :sint16_type
 */
typedef signed short sint16;

/**
 * @brief :  This standard AUTOSAR type shall be of 32 bit signed
 * @implements :sint32_type
 */
typedef signed long sint32;

/**
 * @brief :  This standard AUTOSAR type shall be of 64 bit signed
 * @implements :sint64_type
 */
typedef signed long long sint64;

/**
 * @brief :  This standard AUTOSAR type shall be of 8 bit unsigned
 * @implements :uint8_least
 */
typedef unsigned char uint8_least;

/**
 * @brief :  This standard AUTOSAR type shall be of 16 bit unsigned
 * @implements :uint16_least
 */
typedef unsigned short uint16_least;

/**
 * @brief :  This standard AUTOSAR type shall be of 32 bit unsigned
 * @implements :uint32_least
 */
typedef unsigned long uint32_least;

/**
 * @brief :  This standard AUTOSAR type shall be of 8 bit signed
 * @implements :sint8_least
 */
typedef signed char sint8_least;

/**
 * @brief :  This standard AUTOSAR type shall be of 16 bit signed
 * @implements :sint16_least
 */
typedef signed short sint16_least;

/**
 * @brief :  This standard AUTOSAR type shall be of 32 bit signed
 * @implements :sint32_least
 */
typedef signed long sint32_least;

/**
 * @brief : 32bit long floating data type
 * @implements : float32
 */
typedef float float32;

/**
 * @brief : 64bit long floating data type
 * @implements : float64
 */
typedef double float64;

#elif (CPU_TYPE == CPU_TYPE_16)
/**
 * @brief :  This standard AUTOSAR type shall be of 8 bit unsigned
 * @implements :boolean type
 */
typedef unsigned char boolean;

/**
 * @brief :  This standard AUTOSAR type shall be of 8 bit unsigned
 * @implements :uint8_type
 */
typedef unsigned char uint8;

/**
 * @brief :  This standard AUTOSAR type shall be of 16 bit unsigned
 * @implements :uint16_type
 */
typedef unsigned short uint16;

/**
 * @brief :  This standard AUTOSAR type shall be of 32 bit unsigned
 * @implements :uint32_type
 */
typedef unsigned long uint32;

/**
 * @brief :  This standard AUTOSAR type shall be of 64 bit unsigned
 * @implements :uint64_type
 */
typedef unsigned long long uint64;

/**
 * @brief :  This standard AUTOSAR type shall be of 8 bit signed
 * @implements :sint8_type
 */
typedef signed char sint8;

/**
 * @brief :  This standard AUTOSAR type shall be of 16 bit signed
 * @implements :sint16_type
 */
typedef signed short sint16;

/**
 * @brief :  This standard AUTOSAR type shall be of 32 bit signed
 * @implements :sint32_type
 */
typedef signed long sint32;

/**
 * @brief :  This standard AUTOSAR type shall be of 64 bit signed
 * @implements :sint64_type
 */
typedef signed long long sint64;

/**
 * @brief :  This standard AUTOSAR type shall be of 8 bit unsigned
 * @implements :uint8_least
 */
typedef unsigned char uint8_least;

/**
 * @brief :  This standard AUTOSAR type shall be of 16 bit unsigned
 * @implements :uint16_least
 */
typedef unsigned short uint16_least;

/**
 * @brief :  This standard AUTOSAR type shall be of 32 bit unsigned
 * @implements :uint32_least
 */
typedef unsigned long uint32_least;

/**
 * @brief :  This standard AUTOSAR type shall be of 8 bit signed
 * @implements :sint8_least
 */
typedef signed char sint8_least;

/**
 * @brief :  This standard AUTOSAR type shall be of 16 bit signed
 * @implements :sint16_least
 */
typedef signed short sint16_least;

/**
 * @brief :  This standard AUTOSAR type shall be of 32 bit signed
 * @implements :sint32_least
 */
typedef signed long sint32_least;

/**
 * @brief : 32bit long floating data type
 * @implements : float32
 */
typedef float float32;

/**
 * @brief : 64bit long floating data type
 * @implements : float64
 */
typedef double float64;

#elif (CPU_TYPE == CPU_TYPE_8)
/**
 * @brief :  This standard AUTOSAR type shall be of 8 bit unsigned
 * @implements :boolean type
 */
typedef unsigned char boolean;

/**
 * @brief :  This standard AUTOSAR type shall be of 8 bit unsigned
 * @implements :uint8_type
 */
typedef unsigned char uint8;

/**
 * @brief :  This standard AUTOSAR type shall be of 16 bit unsigned
 * @implements :uint16_type
 */
typedef unsigned short uint16;

/**
 * @brief :  This standard AUTOSAR type shall be of 32 bit unsigned
 * @implements :uint32_type
 */
typedef unsigned long uint32;

/**
 * @brief :  This standard AUTOSAR type shall be of 64 bit unsigned
 * @implements :uint64_type
 */
typedef unsigned long long uint64;

/**
 * @brief :  This standard AUTOSAR type shall be of 8 bit signed
 * @implements :sint8_type
 */
typedef signed char sint8;

/**
 * @brief :  This standard AUTOSAR type shall be of 16 bit signed
 * @implements :sint16_type
 */
typedef signed short sint16;

/**
 * @brief :  This standard AUTOSAR type shall be of 32 bit signed
 * @implements :sint32_type
 */
typedef signed int sint32;

/**
 * @brief :  This standard AUTOSAR type shall be of 64 bit signed
 * @implements :sint64_type
 */
typedef signed long long sint64;

/**
 * @brief :  This standard AUTOSAR type shall be of 8 bit unsigned
 * @implements :uint8_least
 */
typedef unsigned char uint8_least;

/**
 * @brief :  This standard AUTOSAR type shall be of 16 bit unsigned
 * @implements :uint16_least
 */
typedef unsigned short uint16_least;

/**
 * @brief :  This standard AUTOSAR type shall be of 32 bit unsigned
 * @implements :uint32_least
 */
typedef unsigned long uint32_least;

/**
 * @brief :  This standard AUTOSAR type shall be of 8 bit signed
 * @implements :sint8_least
 */
typedef signed char sint8_least;

/**
 * @brief :  This standard AUTOSAR type shall be of 16 bit signed
 * @implements :sint16_least
 */
typedef signed short sint16_least;

/**
 * @brief :  This standard AUTOSAR type shall be of 32 bit signed
 * @implements :sint32_least
 */
typedef signed int sint32_least;

/**
 * @brief : 32bit long floating data type
 * @implements : float32
 */
typedef float float32;

/**
 * @brief : 64bit long floating data type
 * @implements : float64
 */
typedef double float64;
#endif
#endif
