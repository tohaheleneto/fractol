/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alghoriphms.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vminisa- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/24 21:20:13 by vminisa-          #+#    #+#             */
/*   Updated: 2019/09/24 21:20:23 by vminisa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../fractol.h"

int				mandelbrot(t_complex c, void *f_)
{
	int			i;
	t_complex	z;
	t_fcl		*f;

	f = (t_fcl *)f_;
	z = init_complex(c.re, c.im);
	i = -1;
	while (z.re * z.re + z.im * z.im <= 4.0 && ++i < f->max_i)
	{
		z = init_complex(z.re * z.re - z.im * z.im + c.re,
				2.0 * z.re * z.im + c.im);
	}
	return (i);
}

int				mandelbar(t_complex c, void *f_)
{
	int			i;
	t_complex	z;
	t_fcl		*f;

	f = (t_fcl *)f_;
	z = init_complex(c.re, c.im);
	i = 0;
	while (z.re * z.im + z.im * z.im <= 4 && i < f->max_i)
	{
		z = init_complex(z.re * z.re - z.im * z.im + c.re,
				-2.0 * z.re * z.im + c.im);
		i++;
	}
	return (i);
}

int				julia(t_complex c, void *f_)
{
	int			i;
	t_complex	z;
	t_fcl		*f;

	f = (t_fcl *)f_;
	z = c;
	i = 0;
	while (z.re * z.re + z.im * z.im <= 4 && i < f->max_i)
	{
		z = init_complex(z.re * z.re - z.im * z.im + f->c.re,
				2 * z.re * z.im + f->c.im);
		i++;
	}
	return (i);
}

static void		black_func(t_fcl *f, int x, int y)
{
	t_color		black;

	black.r = 0;
	black.g = 0;
	black.b = 0;
	pixel_to_img(f, x, y, black);
}

void			*fractals(void *thread)
{
	t_thr		*t;
	int			x;
	int			iter;
	t_complex	c;

	t = (t_thr *)thread;
	while (++(t->in) < t->out)
	{
		c.im = (t->fcl.max.im + t->fcl.offset_y -
				(double)(t->in) * t->fcl.factor.im);
		x = -1;
		while (++x < (int)WTH)
		{
			c.re = (t->fcl.min.re + t->fcl.offset_x +
					(double)x * t->fcl.factor.re);
			if ((iter = t->fcl.f(c, &(t->fcl))) < t->fcl.max_i)
				set_color(iter, x, t->in, &(t->fcl));
			else
				black_func(&t->fcl, x, t->in);
		}
	}
	return (NULL);
}
