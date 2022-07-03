/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaren <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 13:42:07 by rmaren            #+#    #+#             */
/*   Updated: 2021/10/09 13:42:49 by rmaren           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	end(char const *s1, char const *set, int count_st)
{
	int	i;
	int	j;
	int	set_count;

	if (set[0] == '\0')
		return (ft_strlen(s1));
	set_count = ft_strlen(set) - 1;
	if (ft_strlen(set) - 1 < 0)
		set_count = 0;
	i = ft_strlen(s1) - 1;
	while (s1[i] && i > count_st)
	{
		j = 0;
		while (set[j])
		{
			if (s1[i] == set[j])
				break ;
			if (set_count <= j)
				return (i);
			j++;
		}
		i--;
	}
	return (i);
}

static int	start(char const *s1, char const *set)
{
	int	i;
	int	j;
	int	count_st;

	i = 0;
	j = 0;
	count_st = 0;
	while (s1[i] && set[j])
	{
		while (set[j])
		{
			if (s1[i] == set[j])
			{
				count_st++;
				j = 0;
				break ;
			}
			else
				j++;
		}
		i++;
	}
	return (count_st);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	int		count_st;
	int		count_end;
	char	*new_str;

	count_st = 0;
	if (s1 == NULL || set == NULL)
		return (NULL);
	count_st = start(s1, set);
	i = ft_strlen(s1) - 1;
	j = 0;
	count_end = end(s1, set, count_st);
	new_str = malloc ((count_end - count_st + 2) * sizeof(char));
	if (new_str == NULL)
		return (NULL);
	j = 0;
	i = count_st;
	while (i <= count_end)
		new_str[j++] = s1[i++];
	new_str[j] = '\0';
	return (new_str);
}
