/*
** EPITECH PROJECT, 2017
** Convert base
** File description:
** convert from base decimal to any base
*/

#include "../../include/my.h"
#include <stdlib.h>

char *my_convert_base(unsigned long nb, char *base)
{
	char *res = malloc(sizeof(char) * 11);
	char tmp;
	int i = 0;

	for (; nb > 0; i++) {
		tmp = nb % my_strlen(base);
		res[i] = base[tmp];
		nb = nb / my_strlen(base);
	}
	my_revstr(res);
	return (res);
}
