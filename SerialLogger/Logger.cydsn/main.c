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
      LogMsg("Hello %d %f", 1, 1.121212);  
      
      uint8_t a = 1;
      uint16_t b = 60000;
      uint32_t c = 1000000;
      int8_t e = -1;
      int16_t f = -5232;
      int32_t g = -55434511;
      float derp = 4234.542312;
      
      char* txt = "why hello there\0";
      LogMsg("Sample text %u %u %u %s", a, b, c, txt);
      LogMsg("Signed %d %d %d", e, f, g);
      LogMsg("Floats %f %f", derp, -5345.234234);
      CyDelay(1000);
    }
}

/* [] END OF FILE */
