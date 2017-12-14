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

int draw_circle_splash(framebuffer_t *buff, sfVector2i center, int rad)
{
	int red = rand() % 255 + 1;
	int green = rand() % 255 + 1;
	int blue = rand() % 255 + 1;
	for (int i = center.y-rad; i <= center.y+rad; i++) {
		for (int j = center.x-rad; j <= center.x+rad; j++) {
			if (pow(j - center.x, 2) + pow(i - center.y, 2) <= pow(rad, 2))
				my_put_pixel(buff, j, i, sfColor_fromRGB(red, green, blue));
		}
	}
	return (0);
}
