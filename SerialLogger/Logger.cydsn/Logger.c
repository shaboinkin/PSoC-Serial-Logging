#include <project.h>
#include <stdio.h>

#define CR (0x0Du) // carriage return character
#define LF (0x0Au) // define line feed character

// some memory to store formatted text before sending out the uart
// 256bytes is probably excessive but whatever. Change to whatever your needs are
char buffer[256];

void LogString(const char* msg)
{
  Log_UartPutString(msg); 
  Log_UartPutChar(CR);
  Log_UartPutChar(LF);
}

void LogChar(const char* msg, const char value)
{
  sprintf(buffer, "%s %c", msg, value);
  Log_UartPutString(buffer);
  Log_UartPutChar(CR);
  Log_UartPutChar(LF);
}

void Logu8(const char* msg, const uint8_t value)
{
  sprintf(buffer, "%s %d", msg, value);
  Log_UartPutString(buffer);
  Log_UartPutChar(CR);
  Log_UartPutChar(LF);
}

void Log8( const char* msg, const int8_t  value)
{
  sprintf(buffer, "%s %d", msg, value);
  Log_UartPutString(buffer);
  Log_UartPutChar(CR);
  Log_UartPutChar(LF);
}

void Logu16(const char* msg, const uint16_t value)
{
  sprintf(buffer, "%s %u", msg, value);
  Log_UartPutString(buffer);
  Log_UartPutChar(CR);
  Log_UartPutChar(LF);
}
void Log16( const char* msg, const int16_t  value)
{
  sprintf(buffer, "%s %d", msg, value);
  Log_UartPutString(buffer);
}

void Logu32(const char* msg, const uint32_t value)
{
  sprintf(buffer, "%s %u", msg, (unsigned int) value);
  Log_UartPutString(buffer);
  Log_UartPutChar(CR);
  Log_UartPutChar(LF);
}

void Log32( const char* msg, const int32_t  value)
{
  sprintf(buffer, "%s %d", msg, (int) value);
  Log_UartPutString(buffer);
  Log_UartPutChar(CR);
  Log_UartPutChar(LF);
}

void Logu64(const char* msg, const uint64_t value)
{
  sprintf(buffer, "%s %llu", msg, value);
  Log_UartPutString(buffer); 
  Log_UartPutChar(CR);
  Log_UartPutChar(LF);
}

void Log64( const char* msg, const int64_t  value)
{
  sprintf(buffer, "%s %llu", msg, value);
  Log_UartPutString(buffer);
  Log_UartPutChar(CR);
  Log_UartPutChar(LF);
}

void LogFloat( const char* msg, const float  value)
{
  sprintf(buffer, "%s %f", msg, value);
  Log_UartPutString(buffer);
  Log_UartPutChar(CR);
  Log_UartPutChar(LF);
}

void LogDouble(const char* msg, const double value)
{
  sprintf(buffer, "%s %f", msg, value);
  Log_UartPutString(buffer);
  Log_UartPutChar(CR);
  Log_UartPutChar(LF);
}

/* [] END OF FILE */
