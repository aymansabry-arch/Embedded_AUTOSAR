/**
 * @file    : Compiler_cfg.h
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

#ifndef Compiler_cfg
#define Compiler_cfg

/**
 * @brief DIO memory and pointer Classes
 */
#define DIO_CODE
#define DIO_CONST
#define DIO_APPL_CODE
#define DIO_APPL_DATA
#define DIO_APPL_CONST
#define DIO_VAR_NOINIT
#define DIO_CALLOUT_CODE
#define DIO_VAR_POWER_ON_INIT
#define DIO_VAR_FAST
#define DIO_VAR

/**
 * @brief Port memory and pointer Classes
 */
#define PORT_CODE
#define PORT_CONST
#define PORT_APPL_CODE
#define PORT_APPL_DATA
#define PORT_APPL_CONST
#define PORT_VAR_NOINIT
#define PORT_CALLOUT_CODE
#define PORT_VAR_POWER_ON_INIT
#define PORT_VAR_FAST
#define PORT_VAR

#endif
