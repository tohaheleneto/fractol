/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmiklaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/24 14:48:50 by cmiklaz           #+#    #+#             */
/*   Updated: 2018/11/25 19:03:02 by cmiklaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int	i;
	int	*range;

	i = 0;
	if (min >= max)
		return (0);
	else
	{
		range = (int*)malloc(sizeof(int) * (max - min));
		if (!range)
			return (0);
		while (max - min >= 1)
		{
			range[i] = min++;
			i++;
		}
		return (range);
	}
}
