/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmiklaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/18 18:23:16 by cmiklaz           #+#    #+#             */
/*   Updated: 2018/12/18 23:12:47 by cmiklaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static	int		count_size(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
	{
		len++;
		n = n * (-1);
	}
	while (n)
	{
		len++;
		n /= 10;
	}
	return (len);
}

char			*ft_itoa(int n)
{
	unsigned int	cpy;
	int				size;
	char			*new;

	cpy = 0;
	size = count_size(n);
	if (!(new = (char *)malloc(size + 1)))
		return (NULL);
	if (n < 0)
	{
		cpy = n * (-1);
		new[0] = '-';
	}
	else if (n == 0)
		new[0] = '0';
	else
		cpy = n;
	new[size] = '\0';
	while (cpy)
	{
		new[--size] = (cpy % 10) + '0';
		cpy /= 10;
	}
	return (new);
}
