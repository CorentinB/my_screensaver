/*
** EPITECH PROJECT, 2017
** pixels_utils
** File description:
** Utils for Pixels
*/

#include <stdlib.h>
#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include "../include/my.h"

void my_put_pixel(framebuffer_t *buffer, unsigned int x, unsigned int y, sfColor color)
{
	if (x < 1919 && y < 1079 && x >= 0 && y >= 0) {
		x *= 4;
		y *= 4;
		buffer->pixels[buffer->width * y + x] = color.r;
		buffer->pixels[buffer->width * y + x + 1] = color.g;
		buffer->pixels[buffer->width * y + x + 2] = color.b;
		buffer->pixels[buffer->width * y + x + 3] = color.a;
	}
}

framebuffer_t *framebuffer_create(unsigned int width, unsigned int height)
{
	framebuffer_t *buffer;
	sfUint8 *pixels;
	int len_buff;

	buffer = malloc(sizeof(*buffer));
	buffer->width = width;
	buffer->height = height;
	len_buff = width * height * 4;
	pixels = malloc(sizeof(*pixels) * len_buff);
	buffer->pixels = pixels;
	for (unsigned int i = 0; i < width * height * 4; i += 4) {
		buffer->pixels[i] = 0;
		buffer->pixels[i + 1] = 0;
		buffer->pixels[i + 2] = 0;
		buffer->pixels[i + 3] = 255;
	}
	return (buffer);
}
