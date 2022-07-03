/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaren <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 13:20:42 by rmaren            #+#    #+#             */
/*   Updated: 2021/10/12 13:20:46 by rmaren           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;
	int	j;

	i = 0;
	if (s == NULL)
		return ;
	j = ft_strlen(s);
	while (i < j)
	{
		(*f)(i, s);
		i++;
		s++;
	}
}
