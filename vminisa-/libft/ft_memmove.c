/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmiklaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 17:40:25 by cmiklaz           #+#    #+#             */
/*   Updated: 2019/01/05 02:18:16 by cmiklaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*mass;
	unsigned char	*str;
	size_t			i;

	i = 0;
	mass = (unsigned char *)dst;
	str = (unsigned char *)src;
	if (dst < src)
		while (i < len)
		{
			*(mass + i) = *(str + i);
			i++;
		}
	if (dst > src)
		while (len)
		{
			len--;
			*(mass + len) = *(str + len);
		}
	return (mass);
}
