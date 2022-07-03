/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaren <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 13:17:19 by rmaren            #+#    #+#             */
/*   Updated: 2021/10/12 13:17:22 by rmaren           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_numblen(int n)
{
	int	len;

	if (n < 0)
		n = n * (-1);
	len = 1;
	if (n >= 0 && n <= 9)
		return (1);
	while ((n / 10) > 9)
	{
		len++;
		n /= 10;
	}
	if (n % 10 <= 9)
		len++;
	return (len);
}

static int	ft_frst_symb(int n, int rank)
{
	int	i;

	i = 0;
	while (i < rank - 1)
	{
		n /= 10;
		i++;
	}
	n = n % 10;
	return (n);
}

static char	*tonegnum(int n, int len)
{
	char	*str;
	int		i;
	int		j;

	i = 0;
	j = 0;
	str = malloc(sizeof(char) * (len + 2));
	if (str == NULL)
		return (NULL);
	str[i] = '-';
	while (j < len)
	{
		str[j + 1] = ft_frst_symb(n, len - j) + 48;
		j++;
	}
	str[j + 1] = '\0';
	return (str);
}

static char	*tonum(int n, int len)
{
	char	*str;
	int		i;
	int		j;

	i = 0;
	j = 0;
	str = malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	while (j < len)
	{
		str[j] = ft_frst_symb(n, len - j) + 48;
		j++;
	}
	str[j] = '\0';
	return (str);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*str;
	int		i;
	int		is_negative;

	i = 0;
	is_negative = 0;
	if (n == -2147483648)
	{
		str = malloc (sizeof(char) * 12);
		str = ft_memcpy(str, "-2147483648", 12);
		return (str);
	}
	if (n < 0)
	{
		is_negative = 1;
		n = n * (-1);
	}
	len = ft_numblen(n);
	if (is_negative == 1)
		str = tonegnum(n, len);
	else
		str = tonum(n, len);
	return (str);
}
