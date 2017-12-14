/*
** EPITECH PROJECT, 2017
** my_screensaver_2017
** File description:
** Functions that set val for the cube animation
*/

#include <SFML/Graphics.h>
#include "../include/my.h"

sfVector2i set_center_cube(void)
{
	sfVector2i center;

	center.x = 200;
	center.y = 500;
	return (center);
}

sfVector2i set_center_two_cube(void)
{
	sfVector2i center_two;

	center_two.x = 200;
	center_two.y = 200;
	return (center_two);
}

sfVector2i set_center_three_cube(void)
{
	sfVector2i center_three;

	center_three.x = 500;
	center_three.y = 200;
	return (center_three);
}

sfVector2i set_center_one_cube_in(void)
{
	sfVector2i center_in_one;

	center_in_one.x = 300;
	center_in_one.y = 100;
	return (center_in_one);
}

sfVector2i set_center_two_cube_in(void)
{
	sfVector2i center_in_two;

	center_in_two.x = 300;
	center_in_two.y = 400;
	return (center_in_two);
}
