/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmiklaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 16:49:53 by cmiklaz           #+#    #+#             */
/*   Updated: 2019/01/02 16:35:29 by cmiklaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_atoi_skip_spaces(const char *str, int i)
{
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\v'
			|| str[i] == '\f' || str[i] == '\r'
			|| str[i] == '\n')
		i++;
	return (i);
}

int			ft_atoi(const char *str)
{
	int				i;
	long			nb;
	int				flag;
	long			check;

	nb = 0;
	i = 0;
	flag = 1;
	i = ft_atoi_skip_spaces(str, i);
	if (str[i] == '-')
		flag = -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while ((str[i] >= 48 && str[i] <= 57) && (str[i] != '\0'))
	{
		check = nb;
		nb = (nb * 10) + ((str[i] - 48) * flag);
		i++;
		if ((check < 0) && (nb > check))
			return (0);
		if ((check > 0) && (nb < check))
			return (-1);
	}
	return (nb);
}
