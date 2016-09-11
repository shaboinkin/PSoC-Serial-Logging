/* ========================================
 *  Logs out to usb. Startup serial monitor and set baud rate to whatever baud your UART
 *  module is set to.
 *
 * ========================================
*/

#ifndef _Logger_h_
#define _Logger_h_

#include <stdint.h>

void LogMsg(const char* msg, ...);


#endif
/* [] END OF FILE */
