/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaren <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 14:46:03 by rmaren            #+#    #+#             */
/*   Updated: 2021/10/14 14:46:05 by rmaren           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*list;

	if (lst == NULL || del == NULL || *lst == NULL)
		return ;
	while (lst != NULL && *lst != NULL)
	{
		list = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = list;
	}
}
