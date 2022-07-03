/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaren <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 16:06:25 by rmaren            #+#    #+#             */
/*   Updated: 2021/10/06 16:06:26 by rmaren           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	count1;
	size_t	count2;

	count1 = 0;
	count2 = 0;
	if (s2[0] == 0 || s2 == 0)
		return ((char *)s1);
	while (s1[count1] && count1 < n)
	{
		count2 = 0;
		while (s1[count1 + count2] && s2[count2] && count1 + count2 < n
			&& s1[count1 + count2] == s2[count2])
			count2++;
		if (s2[count2] == 0)
			return ((char *)(s1 + count1));
		count1++;
	}
	return (NULL);
}
