/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaren <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 14:46:30 by rmaren            #+#    #+#             */
/*   Updated: 2021/10/14 14:46:31 by rmaren           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*list;
	t_list	*newlist;

	if (f == NULL || lst == NULL)
		return (NULL);
	list = NULL;
	while (lst)
	{
		newlist = ft_lstnew((*f)(lst->content));
		if (newlist == NULL)
		{
			ft_lstclear(&list, del);
			return (NULL);
		}
		lst = lst->next;
		ft_lstadd_back(&list, newlist);
	}
	return (list);
}
