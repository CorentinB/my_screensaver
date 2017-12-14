/*
** EPITECH PROJECT, 2017
** my_screensaver
** File description:
** Main function for the my_sokoban
*/

#include <stdlib.h>
#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include "../include/my.h"
#include <math.h>

int main(int argc, char **argv)
{
	if (argc < 2) {
		exit_no_args();
		return (84);
	} else if (argc > 3) {
		my_printf("Too much arguments. Only one needed.\n");
		return (84);
	}
	for (int i = 1; i < argc; i++) {
		if (argv[i][0] == '-' && argv[i][1] == 'h')
			helper();
		if (argv[i][0] == '1')
			cube();
		if (argv[i][0] == '-' && argv[i][1] == 'd')
			description();
		if (argv[i][0] == '3')
			splash();
		if (argv[i][0] == '2')
			star();
	}
	return (0);
}
