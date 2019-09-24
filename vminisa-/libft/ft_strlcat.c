/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmiklaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 18:52:28 by cmiklaz           #+#    #+#             */
/*   Updated: 2018/12/02 14:33:32 by cmiklaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	char		*dst_c;
	const char	*src_c;
	size_t		n;
	size_t		len;

	dst_c = dst;
	src_c = src;
	n = size;
	while (n-- && *dst_c != '\0')
		dst_c++;
	len = dst_c - dst;
	n = size - len;
	if (n == 0)
		return (len + ft_strlen(src_c));
	while (*src_c != '\0')
	{
		if (n != 1)
		{
			*dst_c++ = *src_c;
			n--;
		}
		src_c++;
	}
	*dst_c = '\0';
	return (len + (src_c - src));
}
