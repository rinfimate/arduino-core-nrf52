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

#ifndef _VARIANT_SPARFUN_NRF52832_
#define _VARIANT_SPARFUN_NRF52832_

/*----------------------------------------------------------------------------
 *        Definitions
 *----------------------------------------------------------------------------*/


/** Frequency of the board main oscillator */
#define VARIANT_MAINOSC		(32768ul)

/** Master clock frequency */
#define VARIANT_MCK			  (64000000ul)

/*----------------------------------------------------------------------------
 *        Headers
 *----------------------------------------------------------------------------*/

#include "WVariant.h"

#ifdef __cplusplus
 #include "Uart.h"
#endif // __cplusplus

 #ifdef __cplusplus
extern "C"{
#endif // __cplusplus

/**
 * Libc porting layers
 */
#if defined (  __GNUC__  )
#    include <syscalls.h> /** RedHat Newlib minimal stub */
#endif

/*----------------------------------------------------------------------------
 *        Pins
 *----------------------------------------------------------------------------*/

// Number of pins defined in PinDescription array
#define PINS_COUNT           (32u)
#define NUM_DIGITAL_PINS     (32u)

#define digitalPinToPort(P)        ( NRF_P0 )
#define digitalPinToBitMask(P)     ( 1 << g_APinDescription[P].ulPin )
#define digitalPinToTimer(P)       ( )
#define portOutputRegister(port)   ( &(port->OUT) )
#define portInputRegister(port)    ( &(port->IN)  )
#define portModeRegister(port)     ( &(port->DIR) )
#define analogInPinToBit(P)        ( g_APinDescription[P].ulPin )
#define digitalPinHasPWM(P)        ( g_APinDescription[P].ulPWMChannel != NOT_ON_PWM )
#define digitalPinToInterrupt(P)   ( P )

#define USER_LED           	 (7u)
#define RED_LED              (11u)
#define GREEN_LED         	 (12u)
#define BLUE_LED			 (7u)

#define LED_BUILTIN          USER_LED
#define BLE_LED              BLUE_LED

/*
 * SPI Interfaces
 */
#define SPI_INTERFACES_COUNT 1

// pins' definition can be overwritten using SPI library
#define PIN_SPI_MOSI         (11u)
#define PIN_SPI_MISO         (12u)
#define PIN_SPI_SCK          (13u)

static const uint8_t SS	  = 10;
static const uint8_t MOSI = PIN_SPI_MOSI;
static const uint8_t MISO = PIN_SPI_MISO;
static const uint8_t SCK  = PIN_SPI_SCK;

/*
 * Wire Interfaces
 */
#define WIRE_INTERFACES_COUNT 1

#define PIN_WIRE_SDA         (20u)
#define PIN_WIRE_SCL         (21u)

// #define PIN_WIRE_SDA1        (18u)
// #define PIN_WIRE_SCL1        (19u)

/*
 * Analog pins
 */
static const uint8_t A0  = 2;
static const uint8_t A1  = 3;
static const uint8_t A2  = 4;
static const uint8_t A3  = 5;
static const uint8_t A4  = 28;
static const uint8_t A5  = 29;
static const uint8_t A6  = 30;
static const uint8_t A7  = 31;



#ifdef __cplusplus
}
#endif


/*----------------------------------------------------------------------------
 *        Arduino objects - C++ only
 *----------------------------------------------------------------------------*/
#ifdef __cplusplus

extern Uart Serial;

#endif

#define SERIAL_PORT_MONITOR         Serial

#endif /* _VARIANT_SPARFUN_NRF52832_ */
