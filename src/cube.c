/*
** EPITECH PROJECT, 2017
** my_screensaver_2017
** File description:
** Functions for the cube animation
*/

#include <stdlib.h>
#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include "../include/my.h"

cube_t create_cube_points(void)
{
	cube_t cube;

	cube.center = set_center_cube();
	cube.center_two = set_center_two_cube();
	cube.center_three = set_center_three_cube();
	cube.center_in_one = set_center_one_cube_in();
	cube.center_in_two = set_center_two_cube_in();
	return (cube);
}

cube_t draw_cube(cube_t cube, framebuffer_t *buffer)
{
	draw_circle(buffer, cube.center, 15);
	cube.center = calculate_cube(cube.center);
	draw_circle(buffer, cube.center_two, 15);
	cube.center_two = calculate_cube_out(cube.center_two);
	draw_circle(buffer, cube.center_three, 15);
	cube.center_three = calculate_cube_out_two(cube.center_three);
	draw_circle(buffer, cube.center_in_one, 15);
	cube.center_in_one = calculate_cube_in_one(cube.center_in_one);
	draw_circle(buffer, cube.center_in_two, 15);
	cube.center_in_two = calculate_cube_in_two(cube.center_in_two);
	return (cube);
}

void cube(void)
{
	sfVideoMode mode = {800, 600, 32};
	sfRenderWindow *wind = sfRenderWindow_create(mode, "", sfResize | sfClose, 0);
	sfEvent event;
	framebuffer_t *buffer = framebuffer_create(800, 600);
	sfTexture *texture = sfTexture_create(800, 600);
	sfSprite *sprite = sfSprite_create();
	cube_t cube = create_cube_points();

	sfRenderWindow_setFramerateLimit(wind, 30);
	while (sfRenderWindow_isOpen(wind)) {
		sfTexture_updateFromPixels(texture, buffer->pixels, 800, 600, 0, 0);
		sfSprite_setTexture(sprite, texture, sfTrue);
		while (sfRenderWindow_pollEvent(wind, &event))
			if (event.type == sfEvtClosed)
				sfRenderWindow_close(wind);
		sfRenderWindow_drawSprite(wind, sprite, NULL);
		sfRenderWindow_display(wind);
		cube = draw_cube(cube, buffer);
	}
	sfRenderWindow_destroy(wind);
	free(buffer);
}
