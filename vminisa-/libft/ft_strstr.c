/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmiklaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/29 21:28:42 by cmiklaz           #+#    #+#             */
/*   Updated: 2019/01/05 03:43:42 by cmiklaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		ft_first(const char *str, const char *to_find)
{
	while (*to_find != '\0')
	{
		if (*to_find != *str)
			return (0);
		str++;
		to_find++;
	}
	return (1);
}

char			*ft_strstr(const char *haystack, const char *needle)
{
	if (*needle == '\0')
		return ((char *)haystack);
	while (*haystack != '\0')
	{
		if (ft_first(haystack, needle) == 1)
			return ((char *)haystack);
		haystack++;
	}
	return (0);
}
