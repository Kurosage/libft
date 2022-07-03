/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaren <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 16:12:43 by rmaren            #+#    #+#             */
/*   Updated: 2021/10/06 16:12:45 by rmaren           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*pp;
	size_t	i;
	size_t	j;

	j = count * size;
	i = 0;
	pp = NULL;
	pp = malloc(j);
	if (pp == NULL)
		return (NULL);
	while (i < j)
	{
		pp[i] = '\0';
		i++;
	}
	return (pp);
}
