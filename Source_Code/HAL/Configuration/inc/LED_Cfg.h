/***************************************************************************************************************************
 *  FILE DESCRIPTION
 *  ----------------------------------------------------------------------------------------------------------------------*/
/**        File: LED_Cfg.h
 *       Module: LED_Cfg
 *
 *  Description: A header file for the LED pre-compile configuration
 *
 *
 **************************************************************************************************************************/
#ifndef LED_Cfg_H
#define LED_Cfg_H

/***************************************************************************************************************************
 *  INCLUDES
 **************************************************************************************************************************/
#include "Std_Types.h"
#include "DIO.h"

/***************************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 **************************************************************************************************************************/
#define LED_CH  PORTD_CHANNEL2

#define LED_OFF STD_LOW
#define LED_ON  STD_HIGH

#define LED_LevelType   Dio_LevelType
#define LED_ChannelType Dio_ChannelType
/***************************************************************************************************************************
 *  GLOBAL FUNCTION MACROS
 **************************************************************************************************************************/


#endif  /* LED_Cfg_H */
 
/****************************************************************************************
 *  END OF FILE: LED_Cfg.h
 ***************************************************************************************/
 