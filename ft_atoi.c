/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaren <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 15:10:49 by rmaren            #+#    #+#             */
/*   Updated: 2021/10/06 15:10:53 by rmaren           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	check(int count1)
{	
	if (count1 == 1)
		return (-1);
	else
		return (0);
}

int	ft_atoi(const char *str)
{
	int			i;
	int			count1;
	long int	res;

	i = 0;
	count1 = 1;
	res = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	if (str[i] == '-')
	{
		count1 *= -1;
		i++;
	}
	if (str[i] == '+' && count1 != -1)
		i++;
	while (str[i] >= 48 && str[i] <= 57)
	{
		res = res * 10 + (str[i] - 48);
		i++;
	}
	if (res < 0)
		return (check(count1));
	return (res * count1);
}
