/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmiklaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/10 22:09:13 by cmiklaz           #+#    #+#             */
/*   Updated: 2018/12/10 22:22:42 by cmiklaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_memalloc(size_t size)
{
	unsigned char *new;

	new = (void *)malloc(sizeof(unsigned char) * size);
	if (!(new))
		return (NULL);
	ft_bzero(new, size);
	return (new);
}
