/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaren <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 15:53:11 by rmaren            #+#    #+#             */
/*   Updated: 2021/10/06 15:53:13 by rmaren           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	lendst;
	size_t	lenst;

	i = 0;
	lendst = (size_t)ft_strlen(dst);
	i = lendst;
	j = 0;
	lenst = (size_t)ft_strlen(src);
	if (size == 0)
		return (lenst);
	if (src == NULL && dst == NULL)
		return (0);
	if (size > lendst)
	{
		while (i < size - 1 && src[j])
			dst[i++] = src[j++];
		dst[i] = '\0';
		return (lenst + lendst);
	}
	else
		return (lenst + size);
}
