#include <stdio.h>
#include <stdarg.h>

// State
// 0: regular
// 1: escape

void vprintk(const char *fmt, va_list args)
{
  int state = 0;

  while (*fmt)
  {
    /* code */
    if (state == 0)
    {
      if (*fmt == '%')
      {
        state = 1;
      }
      else
      {
        putchar(*fmt);
      }
    }
    else
    {
      switch (*fmt)
      {
      case 'c':
        putchar(va_arg(args, int));
        break;
      case 's':
      {
        const char *str = va_arg(args, const char *);
        while (*str)
        {
          putchar(*str++);
        }
        break;
      }
      case 'i':
        printf("%d", va_arg(args, int));
        break;
      case 'f':
        printf("%f", va_arg(args, double));
        break;
      case 'p':

        break;
      case '%':
        putchar('%');
        break;
      default:
        putchar('%');
        putchar(*fmt);
        break;
      }
      state = 0;
    }
    fmt++;
  }
}

void printk(const char *fmt, ...)
{
  va_list args;
  va_start(args, fmt);

  vprintk(fmt, args);

  va_end(args);
}

int main()
{
  printk("Print is a character: %c. DOne!\n", 'c');
  printk("Print is a string: %s. DOne!\n", "string");
  printk("Print is an integer: %i. DOne!\n", 42);
  printk("Print is a float: %f. DOne!\n", 3.14);
  printk("printk an zero integer: %i. DOne!\n", 0);
  return 0;
}