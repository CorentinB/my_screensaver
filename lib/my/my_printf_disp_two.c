/*
** EPITECH PROJECT, 2017
** PSU_my_printf_2017
** File description:
** Displays functions for printf
*/

#define HEXA_LOW ("0123456789abcdef")
#include "../../include/my.h"
#include <stdarg.h>

void display_u(va_list list)
{
	my_put_nbr_uint(va_arg(list, unsigned int));
}

void display_c(va_list list)
{
	my_putchar(va_arg(list, int));
}

void display_s(va_list list)
{
	my_putstr(va_arg(list, char *));
}

void display_big_s(va_list list)
{
	my_printf_s_octal(va_arg(list, char *));
}

void display_p(va_list list)
{
	my_putstr("0x");
	my_putstr(my_convert_base(va_arg(list, unsigned long), HEXA_LOW));
}
