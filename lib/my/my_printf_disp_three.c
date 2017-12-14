/*
** EPITECH PROJECT, 2017
** PSU_my_printf_2017
** File description:
** Displays functions for printf
*/

#include "../../include/my.h"
#include <stdarg.h>

void display_percentage(va_list list)
{
	my_putchar('%');
}

void display_b(va_list list)
{
	my_putstr(my_convert_base(va_arg(list, unsigned int), "01"));
}
