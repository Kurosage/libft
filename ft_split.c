/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaren <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 13:16:34 by rmaren            #+#    #+#             */
/*   Updated: 2021/10/12 13:16:36 by rmaren           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	k_count(char const *s, char c)
{
	int	i;
	int	k;

	i = 0;
	k = 0;
	while (s[i] != '\0')
	{
		if ((s[i + 1] == c || s[i + 1] == '\0') && \
			((s[i] == c || s[i] == '\0') == 0))
			k++;
		i++;
	}
	return (k);
}

static char	**freef(char **mas)
{
	int	i;

	i = 0;
	while (mas[i])
	{
		free(mas[i]);
		i++;
	}
	free(mas);
	return (NULL);
}

static void	copy(char *m, char c, char *start)
{
	int	i;

	i = 0;
	while ((start[i] == c || start[i] == '\0') == 0)
	{
		m[i] = start[i];
		i++;
	}
	m[i] = '\0';
}

static char	**distrib(char *s, char c, char **mas)
{
	int	i;
	int	j;
	int	m;

	i = 0;
	m = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c || s[i] == '\0')
			i++;
		else
		{
			j = 0;
			while ((s[i + j] == c || s[i + j] == '\0') == 0 )
				j++;
			mas[m] = malloc(sizeof(char) * (j + 1));
			if (mas[m] == NULL)
				return (freef(mas));
			copy(mas[m], c, s + i);
			i += j;
			m++;
		}
	}
	return (mas);
}

char	**ft_split(char const *s, char c)
{
	char	**mas;
	int		k;

	if (s == NULL)
		return (NULL);
	k = k_count(s, c);
	mas = (char **)malloc(sizeof(char *) * (k + 1));
	if (mas == NULL)
		return (NULL);
	mas[k] = 0;
	mas = distrib((char *)s, c, mas);
	return (mas);
}
