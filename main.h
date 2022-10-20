#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <unistd.h>


int _putchar(char c);
int _print_string(char *data);
int _printf(const char *format, ...);
int switcher(va_list data, const char *format, int i);
#endif
