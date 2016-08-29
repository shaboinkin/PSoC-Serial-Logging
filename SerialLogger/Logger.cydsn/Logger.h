/* ========================================
 *  Logs out to usb. Startup serial monitor and set baud rate to whatever baud your UART
 *  module is set to.
 *
 * ========================================
*/

#ifndef _Logger_h_
#define _Logger_h_

#include <stdint.h>
  
void LogString(const char* msg);

void LogChar(const char* msg, char value);

void Logu8(const char* msg, const uint8_t value);
void Log8( const char* msg, const int8_t  value);

void Logu16(const char* msg, const uint16_t value);
void Log16( const char* msg, const int16_t  value);

void Logu32(const char* msg, const uint32_t value);
void Log32( const char* msg, const int32_t  value);

void Logu64(const char* msg, const uint64_t value);
void Log64( const char* msg, const int64_t  value);

void LogFloat( const char* msg, const float  value);
void LogDouble(const char* msg, const double value);

#endif
/* [] END OF FILE */
