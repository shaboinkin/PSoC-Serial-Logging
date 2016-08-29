/**
 *  Example of how to use the logger
 *  Ensure the proper setups are done as listed in the textboxes in TopDesign.cysch
 *
 */


#include <project.h>
#include "Logger.h"

int main()
{
    CyGlobalIntEnable; /* Enable global interrupts. */

    /* Place your initialization/startup code here (e.g. MyInst_Start()) */
    Log_Start();
    for(;;)
    {
      LogString("I am a string!");
      
      uint8_t value1 = 123;
      Logu8("I am an unsigned 8 bit value: ", value1); 
      CyDelay(1000);
      
      int8_t value2 = -123;
      Log8("I am a signed 8 bit value: " , value2);
      CyDelay(1000);

      uint32_t value3 = 1234567887;
      Logu32("I am an unsigned 32 bit value: " , value3);
      CyDelay(1000);

      float value4 = 123.456;
      LogFloat("I am a float: " , value4);
      CyDelay(1000);

      char value5 = 'X';
      LogChar("I am a char: ", value5);
      CyDelay(1000);
    }
}

/* [] END OF FILE */
