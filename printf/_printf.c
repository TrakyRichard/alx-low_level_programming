#include "main.h"
#include <stdarg.h>

int _printf(const char *const format, ...)
{

  int i = 0;
  int n_displayed = 0;

  while (format[i] != '\0')
  {
    if (_putchar(format[i]) != -1)
      n_displayed++;
    i++;
  }
  return n_displayed;
}