/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmiklaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/19 06:05:42 by cmiklaz           #+#    #+#             */
/*   Updated: 2019/01/05 05:19:43 by cmiklaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned const char		*a;
	unsigned char			*b;
	size_t					i;

	i = 0;
	a = (unsigned char *)src;
	b = (unsigned char *)dst;
	while (i < n)
	{
		if ((b[i] = a[i]) == (unsigned char)c)
			return (&b[i + 1]);
		i++;
	}
	return (NULL);
}
