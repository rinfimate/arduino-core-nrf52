/*
  Copyright (c) 2016 Arduino Srl.  All right reserved.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
  See the GNU Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/

#include "variant.h"

/*
 * Pins descriptions
 */
const PinDescription g_APinDescription[]=
{
  { NOT_A_PORT, 0, PIO_NOT_A_PIN, PIN_ATTR_NONE, No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER },             //Crystal X0
  { NOT_A_PORT, 0, PIO_NOT_A_PIN, PIN_ATTR_NONE, No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER },             //Crystal X1 
  { PORT0, 2, PIO_DIGITAL, (PIN_ATTR_DIGITAL|PIN_ATTR_PWM), ADC_A0, PWM0, NOT_ON_TIMER },                //Analog
  { PORT0, 3, PIO_DIGITAL, (PIN_ATTR_DIGITAL|PIN_ATTR_PWM), ADC_A1, PWM1, NOT_ON_TIMER },                //Analog
  { PORT0, 4, PIO_DIGITAL, (PIN_ATTR_DIGITAL|PIN_ATTR_PWM), ADC_A2, PWM2, NOT_ON_TIMER },                //Analog
  { PORT0, 5, PIO_DIGITAL, (PIN_ATTR_DIGITAL|PIN_ATTR_PWM), ADC_A3, PWM3, NOT_ON_TIMER },                //Analog
  { PORT0, 6, PIO_DIGITAL, PIN_ATTR_DIGITAL, No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER },                 //Push Button
  { PORT0, 7, PIO_DIGITAL, PIN_ATTR_DIGITAL, No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER },                 //BLE LED
  { PORT0, 8, PIO_DIGITAL, (PIN_ATTR_DIGITAL|PIN_ATTR_PWM), No_ADC_Channel, PWM4, NOT_ON_TIMER },    
  { PORT0, 9, PIO_DIGITAL, PIN_ATTR_DIGITAL, No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER },                 //NFC Antenna
  { PORT0, 10, PIO_DIGITAL, PIN_ATTR_DIGITAL, No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER },                //NFC Antenna
  { PORT0, 11, PIO_DIGITAL, PIN_ATTR_DIGITAL, No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER }, 
  { PORT0, 12, PIO_DIGITAL, PIN_ATTR_DIGITAL, No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER }, 
  { PORT0, 13, PIO_DIGITAL, PIN_ATTR_DIGITAL, No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER }, 
  { PORT0, 14, PIO_DIGITAL, PIN_ATTR_DIGITAL, No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER }, 
  { PORT0, 15, PIO_DIGITAL, PIN_ATTR_DIGITAL, No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER }, 
  { PORT0, 16, PIO_DIGITAL, PIN_ATTR_DIGITAL, No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER }, 
  { PORT0, 17, PIO_DIGITAL, PIN_ATTR_DIGITAL, No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER }, 
  { PORT0, 18, PIO_DIGITAL, PIN_ATTR_DIGITAL, No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER }, 
  { PORT0, 19, PIO_DIGITAL, PIN_ATTR_DIGITAL, No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER }, 
  { PORT0, 20, PIO_DIGITAL, PIN_ATTR_DIGITAL, No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER }, 
  { PORT0, 21, PIO_DIGITAL, PIN_ATTR_DIGITAL, No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER },                //Reset Button
  { PORT0, 22, PIO_DIGITAL, (PIN_ATTR_DIGITAL|PIN_ATTR_PWM), No_ADC_Channel, PWM5, NOT_ON_TIMER },
  { PORT0, 23, PIO_DIGITAL, (PIN_ATTR_DIGITAL|PIN_ATTR_PWM), No_ADC_Channel, PWM6, NOT_ON_TIMER },
  { PORT0, 24, PIO_DIGITAL, PIN_ATTR_DIGITAL, No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER }, 
  { PORT0, 25, PIO_DIGITAL, (PIN_ATTR_DIGITAL|PIN_ATTR_PWM), No_ADC_Channel, PWM7, NOT_ON_TIMER },   
  { PORT0, 26, PIO_DIGITAL, (PIN_ATTR_DIGITAL|PIN_ATTR_PWM), No_ADC_Channel, PWM8, NOT_ON_TIMER },       //SERIAL RX  
  { PORT0, 27, PIO_DIGITAL, (PIN_ATTR_DIGITAL|PIN_ATTR_PWM), No_ADC_Channel, PWM9, NOT_ON_TIMER },       //SERIAL TX
  { PORT0, 28, PIO_DIGITAL, (PIN_ATTR_DIGITAL|PIN_ATTR_PWM), ADC_A4, PWM10, NOT_ON_TIMER },              //Analog
  { PORT0, 29, PIO_DIGITAL, (PIN_ATTR_DIGITAL|PIN_ATTR_PWM), ADC_A5, PWM11, NOT_ON_TIMER },              //Analog
  { PORT0, 30, PIO_DIGITAL, (PIN_ATTR_DIGITAL|PIN_ATTR_PWM), ADC_A6, PWM11, NOT_ON_TIMER },              //Analog
  { PORT0, 31, PIO_DIGITAL, (PIN_ATTR_DIGITAL|PIN_ATTR_PWM), ADC_A7, PWM11, NOT_ON_TIMER }               //Analog
} ;

Uart Serial(26, 27);
