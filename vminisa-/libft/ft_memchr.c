/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmiklaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/03 18:30:50 by cmiklaz           #+#    #+#             */
/*   Updated: 2019/01/05 02:20:40 by cmiklaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*mass;
	size_t			i;

	mass = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (mass[i] == (unsigned char)c)
			return ((void *)mass + i);
		i++;
	}
	return (NULL);
}
