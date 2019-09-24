/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vminisa- <vminisa-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/24 21:21:40 by vminisa-          #+#    #+#             */
/*   Updated: 2019/09/24 21:26:12 by vminisa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRACTOL_H
# define FRACTOL_H

# include "libft/libft.h"
# include <stdlib.h>
# include <mlx.h>
# include <fcntl.h>
# include <math.h>
# include "pthread.h"
# define WTH 			1000
# define HGT 			1000
# define THR 			40
# define PART 			HGT / THR

typedef struct			s_mlx
{
	int					sl;
	int					bpp;
	int					endian;
	char				*data;
	void				*mlx;
	void				*img;
	void				*win;
}						t_mlx;

typedef struct			s_complex
{
	double				re;
	double				im;
}						t_complex;

typedef struct			s_color
{
	char				r;
	char				g;
	char				b;
}						t_color;

typedef struct			s_fcl
{
	t_complex			c;
	t_complex			min;
	t_complex			max;
	t_complex			factor;
	t_mlx				mlx;
	double				tmp1;
	double				offset_x;
	double				offset_y;
	int					stop_move;
	int					max_i;
	int					(*f)(t_complex, void *);
}						t_fcl;

typedef struct			s_thr
{
	pthread_t			p;
	int					in;
	int					out;
	t_fcl				fcl;
}						t_thr;

void					showing(t_fcl *f);
t_complex				init_complex(double re, double im);
void					hooks(t_fcl *f);
void					apply_zoom(t_fcl *f, t_complex mouse, double z_fact);
int						alert_message(int key);
int						change_algorithm(t_fcl *fcl, char *algorithm);
int						julia(t_complex c, void *f_);
int						mandelbar(t_complex c, void *f_);
int						mandelbrot(t_complex c, void *f_);
void					pixel_to_img(t_fcl *f, int x, int y, t_color c);
void					set_color(int iter, int x, int y, t_fcl *f);
int						out(t_fcl *f);
void					*fractals(void *thread);

#endif
