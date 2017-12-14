/*
** EPITECH PROJECT, 2017
** my_screensaver_2017
** File description:
** Functions for the star animation
*/

#include <stdlib.h>
#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include "../include/my.h"
#include <math.h>

void draw_star(framebuffer_t *buffer)
{
	int x = rand() % 1920;
	int y = rand() % 1080;
	int red = rand() % 255 + 1;
	int green = rand() % 255 + 1;
	int blue = rand() % 255 + 1;

	my_put_pixel(buffer, x, y, sfColor_fromRGB(red, green, blue));
}

void star(void)
{
	sfVideoMode mode = {1920, 1080, 32};
	sfRenderWindow *wind = sfRenderWindow_create(mode, "", sfResize | sfClose, 0);
	sfEvent event;
	framebuffer_t *buffer = framebuffer_create(1920, 1080);
	sfTexture *texture = sfTexture_create(1920, 1080);
	sfSprite *sprite = sfSprite_create();

	sfRenderWindow_setFramerateLimit(wind, 60);
	while (sfRenderWindow_isOpen(wind)) {
		sfTexture_updateFromPixels(texture, buffer->pixels, 1920, 1080, 0, 0);
		sfSprite_setTexture(sprite, texture, sfTrue);
		while (sfRenderWindow_pollEvent(wind, &event))
			if (event.type == sfEvtClosed)
				sfRenderWindow_close(wind);
		sfRenderWindow_drawSprite(wind, sprite, NULL);
		sfRenderWindow_display(wind);
		draw_star(buffer);
	}
	sfRenderWindow_destroy(wind);
	free(buffer);
}
