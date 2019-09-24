/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmiklaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 14:35:31 by cmiklaz           #+#    #+#             */
/*   Updated: 2019/01/05 05:09:00 by cmiklaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *d, int c, size_t len)
{
	size_t			i;
	unsigned char	*mass;

	mass = (unsigned char *)d;
	i = 0;
	while (i < len)
		mass[i++] = c;
	return (mass);
}
