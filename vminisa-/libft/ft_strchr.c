/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmiklaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 11:25:39 by cmiklaz           #+#    #+#             */
/*   Updated: 2019/01/05 03:26:06 by cmiklaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	ch_a;
	char	*arr;

	ch_a = (char)c;
	arr = (char *)s;
	while (*arr != '\0' && *arr != ch_a)
		arr++;
	if (*arr != ch_a)
		return (NULL);
	else
		return (arr);
}
