/*
** EPITECH PROJECT, 2017
** PSU_my_printf_2017
** File description:
** printf function made based on the printf included in the standard lib
*/

#include "../../include/my.h"
#include <stdarg.h>

int error_return(void)
{
	return (0);
}

int check_type(char character)
{
	char display_type[13] = "0csiduo%bxXpS";

	for (int i = 0; i <= my_strlen(display_type); i++) {
		if (character == display_type[i])
			return (i);
	}
	return (0);
}

int my_printf_percentage(char const *format, int position)
{
	int percentage_number = 0;

	for (; format[position] == '%'; position++)
		percentage_number++;
	if (percentage_number % 2 != 0) {
		percentage_number--;
		percentage_number = percentage_number / 2;
		percentage_number++;
	} else {
		percentage_number = percentage_number / 2;
	}
	for (int i = 0; i < percentage_number; i++)
		my_putchar('%');
	return (position);
}

int my_printf(const char *format, ...)
{
	va_list list;
	va_start(list, format);
	void (*display[13])(va_list) = {error_return, display_c, display_s,
					display_i, display_d, display_u,
					display_o, display_percentage,
					display_b, display_x, display_big_x,
					display_p, display_big_s};
	int type_disp = 0;

	for (int i = 0; i < my_strlen(format); i++) {
		if (format[i] == '%' && format[i+1] != '%') {
			display[check_type(format[i + 1])](list);
			i++;
		} else if (format[i] == '%' && format[i+1] == '%') {
			i = my_printf_percentage(format, i) - 1;
		} else {
			my_putchar(format[i]);
		}
	}
	return (0);
}
