/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaren <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 16:12:54 by rmaren            #+#    #+#             */
/*   Updated: 2021/10/06 16:12:55 by rmaren           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static char	*ft_strcpy(char *dest, char *src)
{
	char	temp;
	int		count;

	count = 0;
	temp = src[0];
	while (temp != '\0')
	{
		dest[count] = src[count];
		count++;
		temp = src[count];
	}
	dest[count] = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	char	*s;
	int		len;
	int		i;

	len = 0;
	i = 0;
	while (src[len])
		len++;
	s = (char *)malloc(len + 1);
	if (s == NULL)
		return (NULL);
	ft_strcpy(s, src);
	return (s);
}
