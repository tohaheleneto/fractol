/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmiklaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 12:25:21 by cmiklaz           #+#    #+#             */
/*   Updated: 2019/01/05 05:25:59 by cmiklaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	char	ft_first(const char *str, const char *to_find)
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

char			*ft_strnstr(const char *haystack, const char *needle, \
							size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (needle[j])
		j++;
	if (*haystack == '\0')
		return (NULL);
	if (len < j)
		return (NULL);
	j--;
	while (*haystack != '\0' && i < len - j)
	{
		if (ft_first(haystack, needle) == 1)
			return ((char *)haystack);
		haystack++;
		i++;
	}
	return (0);
}
