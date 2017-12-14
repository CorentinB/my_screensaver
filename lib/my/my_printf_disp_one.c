/*
** EPITECH PROJECT, 2017
** PSU_my_printf_2017
** File description:
** Displays functions for printf
*/

#define HEXA_LOW ("0123456789abcdef")
#define HEXA_HIGH ("0123456789ABCDEF")
#include "../../include/my.h"
#include <stdarg.h>

void display_d(va_list list)
{
	my_put_nbr(va_arg(list, int));
}

void display_i(va_list list)
{
	my_put_nbr(va_arg(list, int));
}

void display_o(va_list list)
{
	my_putstr(my_convert_base(va_arg(list, unsigned int), "01234567"));
}

void display_x(va_list list)
{
	my_putstr(my_convert_base(va_arg(list, unsigned int), HEXA_LOW));
}

void display_big_x(va_list list)
{
	my_putstr(my_convert_base(va_arg(list, unsigned int), HEXA_HIGH));
}
