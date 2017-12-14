/*
** EPITECH PROJECT, 2017
** my_put_nbr_uint
** File description:
** Displays the number given as a parameter. It must be able
** to display all the possible values of
** an unsigned int int.
*/

#include "../../include/my.h"

int my_put_nbr_uint(unsigned int nb)
{
	int n2 = 0;

	if (nb >= 10) {
		n2 = nb % 10;
		nb = nb / 10;
		my_put_nbr(nb);
		my_putchar(n2 + 48);
	} else {
		my_putchar(nb + 48);
	}
	return (0);
}
