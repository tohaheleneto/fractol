/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmiklaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 11:59:38 by cmiklaz           #+#    #+#             */
/*   Updated: 2019/01/05 03:28:49 by cmiklaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	ch;
	char	*arr;
	char	*check;

	check = NULL;
	ch = (char)c;
	arr = (char *)s;
	while (*arr != '\0')
	{
		if (*arr == ch)
			check = arr;
		arr++;
	}
	if (*arr == ch)
		return (arr);
	else
		return (check);
}
