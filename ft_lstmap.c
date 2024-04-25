/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kethouve <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 15:02:41 by kethouve          #+#    #+#             */
/*   Updated: 2023/10/17 15:49:06 by kethouve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*nlst;
	t_list	*first;

	if (!lst || !f || !del)
		return (0);
	first = NULL;
	while (lst)
	{
		nlst = ft_lstnew((*f)(lst->content));
		if (!nlst)
		{
			ft_lstclear(&first, del);
			return (0);
		}
		ft_lstadd_back(&first, nlst);
		lst = lst->next;
	}
	return (first);
}
