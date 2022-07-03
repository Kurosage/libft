/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaren <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 15:18:51 by rmaren            #+#    #+#             */
/*   Updated: 2021/10/08 15:18:55 by rmaren           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*pp;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (s1 == 0 || s2 == 0)
		return (0);
	pp = malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (pp == NULL)
		return (NULL);
	while (s1[i])
	{
		pp[j++] = s1[i++];
	}
	i = 0;
	while (s2[i])
	{
		pp[j] = s2[i];
		i++;
		j++;
	}
	pp[j] = '\0';
	return (pp);
}
