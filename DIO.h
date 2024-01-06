/**
 * @file    : DIO.h
 * @version : 1.0.0
 * @brief   : Based on Autosar
 * @details : Implementation Of Digital Input/Output
 * @author  : Ayman Sabri Abo Eleneen
 */

/*==================================================================
 *      project             :  Autosar 4.0.0
 *      platfom             :  ARM
 *      peripheral          :  STM32F407
 *      AutoSar Version     :  4.0.0
 *      Autosar Revision    :  REV0000
 *      SoftWare Version    :  1.0.0
 * ==================================================================
 */
#ifndef DIO_H
#define DIO_H

/**==================================================================
 *                          Includes
 *===================================================================
 */
#include "Std_Types.h"
#include "DIO_Cfg.h"
/**==================================================================
 *                          Definitions
 *===================================================================
 */
#define DIO_VERSION 123
#define DIO_MODULE 120

#define DIO_AS_RELEASE_MIGOR_VERSION 4
#define DIO_AS_RELEASE_MINOR_VERSION 4
#define DIO_AS_RELEASE_REVISION_VERSION 0

#define DIO_SW_MIGOR_VERSION 1
#define DIO_SW_MINOR_VERSION 0
#define DIO_SW_PATCH_VERSION 0

#ifndef DISABLE_MCAL_INTERMODULE_AUTOSAR_MISGOR_CHECK
#if ((DIO_AS_RELEASE_MIGOR_VERSION != STD_AS_RELEASE_MIGOR_VERSION) || \
     (DIO_AS_RELEASE_MINOR_VERSION != STD_AS_RELEASE_MINOR_VERSION))
#else "DIO_TYPES and STD_TYPES Of Version are Different !!! "
#endif
#endif

#ifndef DISABLE_MCAL_INTERMODULE_AUTOSAR_MISGOR_CHECK
#if ((DIO_AS_RELEASE_MIGOR_VERSION != DIO_CFG_AS_RELEASE_MIGOR_VERSION) || \
     (DIO_AS_RELEASE_MINOR_VERSION != DIO_CFG_AS_RELEASE_MINOR_VERSION))
#else "DIO_TYPES and DIO_CFG Of Version are Different !!! "
#endif
#endif

/**
 * @brief :Invalid channel requested
 * @implements : Development Errors
 */
#define DIO_E_PARAM_INVALID_CHANNEL_ID ((uint8)(0x0A))

/**
 * @brief : Invalid port requested
 * @implements : Development Errors
 */
#define DIO_E_PARAM_INVALID_CHANNEL_ID ((uint8)(0x14))

/**
 * @brief : Invalid channel group requested
 * @implements : Development Errors
 */
#define DIO_E_PARAM_INVALID_CHANNEL_ID ((uint8)(0x1F))

/**
 * @brief : API service called with a NULL pointer
 * @implements : Development Errors
 */
#define DIO_E_PARAM_INVALID_CHANNEL_ID ((uint8)(0x20))

/**
 * @brief :Returns the value of the specified DIO channel
 */
#define Dio_ReadChannel_ID ((uint8)(0x00))

/**
 * @brief :Service to set a level of a channel
 */
#define Dio_WriteChannel_ID ((uint8)(0x01))

/**
 * @brief : Returns the level of all channels of that port.
 */
#define Dio_ReadPort_ID ((uint8)(0x02))

/**
 * @brief : Service to set a value of the port
 */
#define Dio_WritePort_ID ((uint8)(0x03))

/**
 * @brief : This Service reads a subset of the adjoining bits of a port.
 */
#define Dio_ReadChannelGroup_ID ((uint8)(0x04))

/**
 * @brief : Service to set a subset of the adjoining bits of a port to a specified leve
 */
#define Dio_WriteChannelGroup_ID ((uint8)(0x05))

/**
 * @brief : Service to get the version information of this module
 */
#define Dio_GetVersionInfo_ID ((uint8)(0x11))

/**
 * @brief : Service to set the value of a given port with required mask.
 */
#define Dio_MaskedWritePort_ID ((uint8)(0x13))

#endif
