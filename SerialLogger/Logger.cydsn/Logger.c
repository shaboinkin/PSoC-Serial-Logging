#include <project.h>
#include <stdio.h>
#include <stdarg.h>

#define CR (0x0Du) // carriage return character
#define LF (0x0Au) // define line feed character

#define BUFFER_SIZE 1024 

char buffer[BUFFER_SIZE];

void LogMsg(const char* msg, ...)
{
  va_list argList;
  va_start(argList, msg);
  vsnprintf(buffer, BUFFER_SIZE, msg, argList);
  va_end(argList);
  Log_UartPutString(buffer);
  Log_UartPutChar(CR);
  Log_UartPutChar(LF);
}


/* [] END OF FILE */
