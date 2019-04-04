//code for turning on LEDs based on value from a dipswitch

//Includes Section
#include <hidef.h>           /* common defines and macros */
#include "derivative.h"      /* derivative-specific definitions */

//Defines section
#define LEDS_DDR DDRS
#define LEDS         PTS
#define FACTOR 30000
#define OFF 0
#define PORTT       PTT




void main(void) 
{
    DDRT = 0;           /*Sets switch to input*/
    LEDS_DDR = 0xFF;    
    LEDS = OFF;
    
    while(1){
	       if( PORTT || 0xFF)
	           LEDS = PORTT;
	       else{
	           LEDS = OFF;
	       }
    }
}
