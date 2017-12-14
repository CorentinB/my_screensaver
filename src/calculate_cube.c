/*
** EPITECH PROJECT, 2017
** my_screensaver_2017
** File description:
** Calculate coord for 3d cube drawind
*/

#include <SFML/Graphics.h>

sfVector2i calculate_cube_in_two(sfVector2i center_in_two)
{
	if (center_in_two.x >= 200 && center_in_two.y < 500) {
		center_in_two.x-=4;
		center_in_two.y+=4;
		return (center_in_two);
	}
}

sfVector2i calculate_cube_in_one(sfVector2i center_in_one)
{
	if (center_in_one.y <= 400 && center_in_one.x == 300) {
		center_in_one.y+=4;
		return (center_in_one);
	}
	if (center_in_one.y >= 400 && center_in_one.x < 590) {
		center_in_one.x+=4;
		return (center_in_one);
	}
}

sfVector2i calculate_cube(sfVector2i centr)
{
	if (centr.x != 500 && centr.y == 500) {
		centr.x+=4;
		return (centr);
	}
	if (centr.x >= 500 && centr.x != 600 && centr.y != 450 && centr.y != 100) {
		centr.x+=4;
		centr.y-=4;
		return (centr);
	}
	if (centr.x == 600 && centr.y != 100) {
		centr.y-=4;
		return (centr);
	}
	if (centr.x != 300 && centr.y == 100) {
		centr.x-=4;
		return (centr);
	}
	if (centr.x <= 300 && centr.y >= 100 && centr.x != 200) {
		centr.x-=4;
		centr.y+=4;
		return (centr);
	}
	if (centr.x == 200 && centr.y <= 500) {
		centr.y+=4;
		return (centr);
	}
}

sfVector2i calculate_cube_out(sfVector2i center_two)
{
	if (center_two.x != 500 && center_two.y == 200) {
		center_two.x+=4;
		return (center_two);
	}
	if (center_two.x < 600 && center_two.y >= 100) {
		center_two.x+=4;
		center_two.y-=4;
		return (center_two);
	}
}

sfVector2i calculate_cube_out_two(sfVector2i center_three)
{
	if (center_three.x == 500 && center_three.y < 500) {
		center_three.y+=4;
		return (center_three);
	}
}
