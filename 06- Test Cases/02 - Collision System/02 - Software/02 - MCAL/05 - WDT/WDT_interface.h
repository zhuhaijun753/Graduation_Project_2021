/****************************************************************************
* Title                 :   WDT   
* Filename              :   WDT_interface.h
* Author                :   Mohamed Hafez
* Origin Date           :   22/12/2020
* Version               :   1.0.0
* Compiler              :   TODO: COMPILER GOES HERE
* Target                :   TODO: MCU GOES HERE
* Notes                 :   None
*
*****************************************************************************/
/****************************************************************************
* Doxygen C Template 
*
*****************************************************************************/
/*************** INTERFACE CHANGE LIST **************************************
*
*    Date    Version   Author          Description 
*  22/12/20   1.0.0   Mohamed Hafez   Interface Created.
*
*****************************************************************************/
/** @file  WDT_interface.h
 *  @brief This module TODO: WHAT DO I DO?
 * 
 *  This is the header file for the definition TODO: MORE ABOUT ME!
 */
//TODO: UPDATE MACRO BELOW
#ifndef WDT_INTERFACE_H_
#define WDT_INTERFACE_H_

/******************************************************************************
* Includes
*******************************************************************************/

/******************************************************************************
* Preprocessor Constants
*******************************************************************************/

/******************************************************************************
* Configuration Constants
*******************************************************************************/

/******************************************************************************
* Macros
*******************************************************************************/
	
/******************************************************************************
* Typedefs
*******************************************************************************/

/******************************************************************************
* Variables
*******************************************************************************/

/******************************************************************************
* Function Prototypes
*******************************************************************************/
void IWDT_voidChangePrescaler(uint8 Copy_u8Divisor);
void IWDT_voidEnableIwdtWithMaxValue(void);
void IWDT_voidEnableIwdtWithGivenValue(uint16 Copy_u16ReloadValue);
void IWDT_voidRefreshIwdtWithValue(void);
void IWDT_voidMakeSoftWareReset(void);
void WWDT_voidMakeSoftWareReset(void);

#endif /*File_H_*/

/*** End of File **************************************************************/
