/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmiklaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/12 20:26:16 by cmiklaz           #+#    #+#             */
/*   Updated: 2019/01/02 16:19:33 by cmiklaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	int		a;
	int		b;

	if ((unsigned char)c < 128)
		write(fd, &c, sizeof(c));
	else
	{
		a = 192 + c / 64;
		b = 128 + c % 64;
		write(fd, &a, sizeof(c));
		write(fd, &b, sizeof(c));
	}
}
