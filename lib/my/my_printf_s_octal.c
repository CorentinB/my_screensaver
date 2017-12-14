/*
** EPITECH PROJECT, 2017
** my_putstr
** File description:
** Display one by one the characters of a string.
*/

#include "../../include/my.h"

int my_printf_s_octal(char const *str)
{
	int i = 0;

	while (str[i] != '\0') {
		if (str[i] < 32 || str[i] >= 127) {
			my_printf_s_octal_zero(str[i]);
		} else {
			my_putchar(str[i]);
		}
		i++;
	}
	return (0);
}
