/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmiklaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/12 18:59:19 by cmiklaz           #+#    #+#             */
/*   Updated: 2018/12/22 15:25:04 by cmiklaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		size;
	int		size_2;
	char	*new;
	int		i;

	if (!s1 || !s2)
		return (NULL);
	i = 0;
	size = ft_strlen(s1);
	size_2 = ft_strlen(s2);
	new = (char *)malloc(size + size_2 + 1);
	if (!new)
		return (0);
	while (i < size)
		new[i++] = (char)*(s1++);
	while (i < size + size_2)
		new[i++] = (char)*(s2++);
	new[i] = '\0';
	return (new);
}
