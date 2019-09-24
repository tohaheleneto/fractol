/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcpy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmiklaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 16:16:33 by cmiklaz           #+#    #+#             */
/*   Updated: 2019/01/05 05:11:38 by cmiklaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*arr1;
	unsigned char	*arr2;

	arr1 = (unsigned char *)src;
	arr2 = (unsigned char *)dst;
	i = 0;
	while (i < n)
	{
		arr2[i] = arr1[i];
		i++;
	}
	return (arr2);
}
