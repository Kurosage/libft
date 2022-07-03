/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaren <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 15:33:38 by rmaren            #+#    #+#             */
/*   Updated: 2021/10/06 15:33:40 by rmaren           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *arr, int c, size_t n)
{
	size_t		i;
	const char	*ss;

	ss = arr;
	i = 0;
	if (c > 256)
	{
		c -= 256;
	}
	while (i < n)
	{
		if (ss[i] == c)
			return ((char *)ss + i);
		i++;
	}
	return (0);
}
