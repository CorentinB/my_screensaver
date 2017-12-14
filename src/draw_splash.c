/*
** EPITECH PROJECT, 2017
** my_screensaver_2017
** File description:
** Functions for the splash animation
*/

#include <stdlib.h>
#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include "../include/my.h"
#include <math.h>

int draw_splash(framebuffer_t *buffer, int radius)
{
	sfVector2i center;

	center.x = rand() % 1920;
	center.y = rand() % 1080;
	draw_circle_splash(buffer, center, radius);
	return (0);
}
