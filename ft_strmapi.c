/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaren <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 13:17:53 by rmaren            #+#    #+#             */
/*   Updated: 2021/10/12 13:17:56 by rmaren           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	int		size;
	char	*dst;

	if (s == NULL)
		return (NULL);
	size = ft_strlen(s);
	dst = malloc((size + 1) *(sizeof(char)));
	if (f == NULL)
		return (NULL);
	if (dst == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		dst[i] = f(i, s[i]);
		i++;
	}
	dst[i] = '\0';
	return (dst);
}
