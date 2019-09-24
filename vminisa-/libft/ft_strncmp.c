/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmiklaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/27 22:49:44 by cmiklaz           #+#    #+#             */
/*   Updated: 2019/01/05 05:22:24 by cmiklaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (*s1 && *s1 == *s2 && i < n - 1)
	{
		s1++;
		s2++;
		i++;
	}
	if (n == 0)
		return (0);
	if ((unsigned char)*s1 > 127 || (unsigned char)*s2 > 127)
		return ((unsigned char)(*s1 - *s2));
	return ((unsigned char)*s1 - (unsigned char)*s2);
}
