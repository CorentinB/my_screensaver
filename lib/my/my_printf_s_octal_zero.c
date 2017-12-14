/*
** EPITECH PROJECT, 2017
** PSU_my_printf_2017
** File description:
** Tool for my_printf
*/

#include "../../include/my.h"

int my_printf_s_octal_zero(char character)
{
	if (my_getnbr(my_convert_base(character, "01234567")) < 10) {
		my_putchar(92);
		my_putstr("00");
		my_putstr(my_convert_base(character, "01234567"));
		return (0);
	}
	if (my_getnbr(my_convert_base(character, "01234567")) < 100) {
		my_putchar(92);
		my_putstr("0");
		my_putstr(my_convert_base(character, "01234567"));
		return (0);
	}
	if (my_getnbr(my_convert_base(character, "01234567")) < 1000) {
		my_putchar(92);
		my_putstr(my_convert_base(character, "01234567"));
		return (0);
	} else {
		my_putchar(92);
		my_putstr(my_convert_base(character, "01234567"));
		return (0);
	}
}
