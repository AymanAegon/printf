#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
int _printf(const char *format, ...);
void print_char(char c);
void print_string(char *s);
#endif