/*
** EPITECH PROJECT, 2017
** my.h
** File description:
** Contain all the prototypes of function in libmy
*/

#ifndef MY_H
#define MY_H
	#include <stdarg.h>
	#include <stdlib.h>
	#include <SFML/Audio.h>
	#include <SFML/Graphics.h>
	#define COLOR sfRed
	void my_putchar(char c);
	int my_isneg(int nb);
	int my_put_nbr(int nb);
	void my_swap(int *a, int *b);
	int my_putstr(char const *str);
	int my_strlen(char const *str);
	int my_getnbr(char const *str);
	void my_sort_int_array(int *tab, int size);
	int my_compute_power_rec(int nb, int power);
	int my_compute_square_root(int nb);
	int my_is_prime(int nb);
	int my_find_prime_sup(int nb);
	char *my_strcpy(char *dest, char const *src);
	char *my_strncpy(char *dest, char const *src, int n);
	char *my_revstr(char *str);
	char *my_strstr(char *str, char const *to_find);
	int my_strcmp(char const *s1, char const *s2);
	int my_strncmp(char const *s1, char const *s2, int n);
	char *my_strupcase(char *str);
	char *my_strlowcase(char *str);
	char *my_strcapitalize(char *str);
	int my_str_isalpha(char const *str);
	int my_str_isnum(char const *str);
	int my_str_islower(char const *str);
	int my_str_isupper(char const *str);
	int my_str_isprintable(char const *str);
	int my_showstr(char const *str);
	int my_showmem(char const *str);
	char *my_strcat(char *dest, char const *src);
	char *my_strncat(char *dest, char const *src, int nb);
	char *my_convert_base(unsigned long nb, char *base);
	int my_put_nbr_uint(unsigned int nb);
	void display_d(va_list list);
	void display_i(va_list list);
	void display_o(va_list list);
	void display_x(va_list list);
	void display_big_x(va_list list);
	void display_u(va_list list);
	void display_c(va_list list);
	void display_s(va_list list);
	void display_big_s(va_list list);
	void display_p(va_list list);
	void display_percentage(va_list list);
	void display_b(va_list list);
	int error_return(void);
	int check_type(char character);
	int my_printf_s_octal_zero(char character);
	int my_printf_s_octal(char const *str);
	int my_printf(const char *format, ...);
	typedef struct framebuffer {
		unsigned int width;
		unsigned int height;
		sfUint8 *pixels;
	} framebuffer_t;
	void my_put_pixel(framebuffer_t *buffer, unsigned int x, unsigned int y, sfColor color);
	framebuffer_t *framebuffer_create(unsigned int width, unsigned int height);
	int draw_circle(framebuffer_t *framebuffer, sfVector2i center, int radius);
	typedef struct cube {
		sfVector2i center;
		sfVector2i center_two;
		sfVector2i center_three;
		sfVector2i center_in_one;
		sfVector2i center_in_two;
	} cube_t;
	cube_t create_cube_points(void);
	cube_t draw_cube(cube_t cube, framebuffer_t *buffer);
	void cube(void);
	sfVector2i calculate_cube(sfVector2i centr);
	sfVector2i calculate_cube_out(sfVector2i center_two);
	sfVector2i calculate_cube_out_two(sfVector2i center_three);
	sfVector2i calculate_cube_in_one(sfVector2i center_in_one);
	sfVector2i calculate_cube_in_two(sfVector2i center_in_two);
	sfVector2i set_center_cube(void);
	sfVector2i set_center_two_cube(void);
	sfVector2i set_center_three_cube(void);
	sfVector2i set_center_one_cube_in(void);
	sfVector2i set_center_two_cube_in(void);
	int exit_no_args(void);
	int helper(void);
	void splash(void);
	int draw_splash(framebuffer_t *buffer, int radius);
	int draw_circle_splash(framebuffer_t *buff, sfVector2i center, int rad);
	void draw_star(framebuffer_t *buffer);
	void star(void);
#endif
