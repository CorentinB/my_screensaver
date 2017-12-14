/*
** EPITECH PROJECT, 2017
** my_screensaver_2017
** File description:
** Help function for my_screensaver
*/

#include <unistd.h>
#include "../include/my.h"

int helper(void)
{
	my_printf("animation rendering in a CSFML window.\n\n");
	my_printf("USAGE\n");
	my_printf(" ./my_screensaver [OPTIONS] animation_id\n");
	my_printf(" animation_id     ID of the animation to process ");
	my_printf("(between 1 and 3)\n\nOP");
	my_printf("TIONS\n -d		print the description of all the animations");
	my_printf(" and quit.\n -h		print the usage and quit.\n");
	return (0);
}

int exit_no_args(void)
{
	my_printf("./my_screensaver:  bad arguments:  0 given but 1 is required\n");
	my_printf("retry with -h\n");
	return (84);
}

int description(void)
{
	my_printf("1:	draw a cube in 3D (it may have a weird behavior with certain");
	my_printf(" CSFML versions)\n");
	my_printf("2:	emulate a sky full of star (wait a few seconds to ");
	my_printf("understand what it is)\n");
	my_printf("3:	it's like Picasso, but better\n");
	return (0);
}
