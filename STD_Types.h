/**
 * @file    : Std_Types.h
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

#ifndef STD_TYPES_H
#define STD_TYPES_H

/* @brief : Include Platform_Types Abstaraction */
#include "Platform_Types.h"
/* @brief : Include Compiler Abstaraction */
#include "Compiler.h"

/**
 * ===================================================================
 *                          SW_File_Version_Informations
 * ===================================================================
 */
#define STD_VERSION_ID 123

#define STD_AS_RELEASE_MIGOR_VERSION 4
#define STD_AS_RELEASE_MINOR_VERSION 4
#define STD_AS_RELEASE_REVISION_VERSION 0

#define STD_SW_MIGOR_VERSION 1
#define STD_SW_MINOR_VERSION 0
#define STD_SW_PATCH_VERSION 0

#ifndef DISABLE_MCAL_INTERMODULE_AUTOSAR_MISGOR_CHECK
#if ((STD_AS_RELEASE_MIGOR_VERSION != PLATFORM_AS_RELEASE_MIGOR_VERSION) || \
     (STD_AS_RELEASE_MINOR_VERSION != PLATFORM_AS_RELEASE_MINOR_VERSION))
#else "STD_TYPES and PLATFORM_TYPES Of Version are Different !!! "
#endif
#endif

#ifndef DISABLE_MCAL_INTERMODULE_AUTOSAR_MISGOR_CHECK
#if ((STD_AS_RELEASE_MIGOR_VERSION != COMPILER_AS_RELEASE_MIGOR_VERSION) || \
     (STD_AS_RELEASE_MINOR_VERSION != COMPILER_AS_RELEASE_MINOR_VERSION))
#else "STD_TYPES and Compiler Of Version are Different !!! "
#endif
#endif

/**
 * @brief : Physical state 5V or 3.3V
 * @implements :Symbol_definitions_Enumeration
 */
#define STD_HIGH 0X01

/**
 * @brief : Physical state 0V
 * @implements : Symbol_definitions_Enumeration
 */
#define STD_LOW 0x00

/**
 * @brief : Logical state active
 * @implements : Symbol_definitions_Enumeration
 */
#define STD_ACTIVE 0X01

/**
 * @brief : Logical state idle
 * @implements : Symbol_definitions_Enumeration
 */
#define STD_IDLE 0X00

/**
 * @brief : state on
 * @implements : Symbol_definitions_Enumeration
 */
#define STD_ON 0x01

/**
 * @brief : state off
 * @implements : Symbol_definitions_Enumeration
 */
#define STD_OFF 0x00

/**
 * @brief : reurn code for erorr/failer
 * @implements : Symbol_definitions_Enumeration
 */
#define E_NOT_OK 0x01

/**
 * @brief : Because E_OK is already defined within OSEK, the symbol E_OK has to be shared. To avoid
name clashes and redefinition problems, the symbols have to be defined in the following way
(approved within implementation):
*/
#ifndef STATUSTYPEDEFINED
#define STATUSTYPEDEFINED
#define E_OK 0x00u
typedef unsigned char StatusType; /* OSEK compliance */
#endif

/**
 * @brief : This type shall be used to request the version of a BSW module using the <Module name>_Get
          VersionInfo() function.
*/
typedef unsigned int uint8;

typedef struct
{
     uint8 vendorID;         /** @brief Vender ID */
     uint8 moduleID;         /** @brief BSW Moudule ID */
     uint8 sw_major_version; /** @brief BSW Module Software Major Version */
     uint8 sw_minor_version; /** @brief BSW Module Software Minor Version */
     uint8 sw_patch_version; /** @brief BSW Module Software Patch Version */
} Std_VersionInfoType;

#endif
