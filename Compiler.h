/**
 * @file    : Compiler.h
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

#ifndef COMPILER_H
#define COMPILER_H

/**
 * ===================================================================
 *                          Platform_File_Version_Informations
 * ===================================================================
 */

#define COMPILER_VERSION_ID 123

#define COMPILER_AS_RELEASE_MIGOR_VERSION 4
#define COMPILER_AS_RELEASE_MINOR_VERSION 4
#define COMPILER_AS_RELEASE_REVISION_VERSION 0

#define COMPILER_SW_MIGOR_VERSION 1
#define COMPILER_SW_MINOR_VERSION 0
#define COMPILER_SW_PATCH_VERSION 0

/**
 * @brief  : The memory class AUTOMATIC shall be provided as empty definition, used for
the declaration of local pointers
*/
#define AUTOMATIC

/**
 * @brief : The memory class TYPEDEF shall be provided as empty definition. This memory
class shall be used within type definitions, where no memory qualifier can be
specified. This can be necessary for defining pointer types, with e.g. P2VAR,
where the macros require two parameters. First parameter can be specified in the
type definition (distance to the memory location referenced by the pointer), but
the second one (memory allocation of the pointer itself) cannot be defined at this
time. Hence, memory class
TYPEDEF shall be applied
*/
#define TYPEDEF

/**
 * @brief : The compiler abstraction shall provide the INLINE define for abstraction of the
keyword inline.
*/
#define INLINE inline

#ifndef _GREENHILLS_C_STM32F407_
#define _GREENHILLS_C_STM32F407_
#endif
/**
 * @brief : The compiler abstraction shall provide the LOCAL_INLINE define for abstraction
of the keyword inline in functions with “static” scope
*/
#define LOCAL_INLINE static inline

/******************************** Green Hills Compiler      ***************************/
#ifdef _GREENHILLS_C_STM32F407_
#define INLINE __inline
#define LOCAL_INLINE static __inline
#define STATIC
#define INTERRUPT_FUNC __interrupt__
#endif

/******************************** Cosmic Compiler      ***************************/
#ifdef _COSMIC_C_STM32F407_
#define INLINE @ inline
#define LOCAL_INLINE static @ inline
#define STATIC
#define INTERRUPT_FUNC @interrupt
#endif

/******************************** Gnu Arm Compiler      ***************************/
#ifdef _GNU_ARM_C_STM32F407_
#define INLINE inline
#define LOCAL_INLINE static inline
#define STATIC static
#define INTERRUPT_FUNC
#endif

/******************************** Hightec Compiler      ***************************/
#ifdef _HIGHTEC_C_STM32F407_
#define INLINE __inline
#define LOCAL_INLINE static __inline
#define STATIC
#define INTERRUPT_FUNC __attribute__((interrupt));
#endif

/******************************** Linaro Compiler      ***************************/
#ifdef _LINARO_C_STM32F407_
#define INLINE __inline
#define LOCAL_INLINE static __inline
#define STATIC
#define INTERRUPT_FUNC
#endif
/******************************** Iar Compiler      ***************************/
#ifdef _IAR_C_STM32F407_
#define INLINE inline
#define LOCAL_INLINE static inline
#define STATIC
#define INTERRUPT_FUNC
#endif

/**
 * @brief : The compiler abstraction shall define the FUNC macro for the declaration and
 *           definition of functions that ensures correct syntax of function declarations as
 *          required by a specific compiler
 */
#define FUNC(rettype, memclass)

/**
 * @brief : The compiler abstraction shall define the FUNC_P2CONST macro for the
 * declaration and definition of functions returning a pointer to a constant. This shall
 * ensure the correct syntax of function declarations as required by a specific
 * compiler
 */
#define FUNC_P2CONST(rettype, ptrclass, memclass)

/**
 * @brief : The compiler abstraction shall define the FUNC_P2VAR macro for the declaration
 * and definition of functions returning a pointer to a variable. This shall ensure the
 * correct syntax of function declarations as required by a specific compiler
 */
#define FUNC_P2VAR(rettype, ptrclass, memclass)

/**
 * @brief : The compiler abstraction shall define the P2VAR macro for the declaration and
 * definition of pointers in RAM, pointing to variables.
 * The pointer itself is modifiable (e.g. ExamplePtr++).
 * The pointer’s target is modifiable (e.g. *ExamplePtr = 5).
 */
#define P2VAR(ptrtype, memclass, ptrclass)

/**
 * @brief : The compiler abstraction shall define the P2CONST macro for the declaration
 * and definition of pointers in RAM pointing to constants
 * The pointer itself is modifiable (e.g. ExamplePtr++).
 * The pointer’s target is not modifiable (read only)
 */
#define P2CONST(ptrtype, memclass, ptrclass)

/**
 * @brief : The compiler abstraction shall define the CONSTP2VAR macro for the
 * declaration and definition of constant pointers accessing variables.
 * The pointer itself is not modifiable (fix address).
 * The pointer’s target is modifiable (e.g. *ExamplePtr = 18).
 */
#define CONSTP2VAR (ptrtype, memclass, ptrclass)

/**
 * @brief : The compiler abstraction shall define the CONSTP2CONST macro for the
 * declaration and definition of constant pointers accessing constants.
 * The pointer itself is not modifiable (fix address).
 * The pointer’s target is not modifiable (read only)
 */
#define CONSTP2CONST(ptrtype, memclass, ptrclass)

/**
 * @brief : The compiler abstraction shall define the P2FUNC macro for the type definition of
 * pointers to functions.
 */
#define P2FUNC(rettype, ptrclass, fctname)

/**
 * @brief : The compiler abstraction shall define the CONSTP2FUNC macro for the type
 * definition of constant pointers to functions.
 */
#define CONSTP2FUNC(rettype, ptrclass, fctname)

/**
 * @brief : The compiler abstraction shall define the CONST macro for the declaration and
 * definition of constan
 */
#define CONST(consttype, memclass)
/**
 * @brief : The compiler abstraction shall define the VAR macro for the declaration and
 * definition of variables.
 */
#define VAR(vartype, memclass)

#endif
