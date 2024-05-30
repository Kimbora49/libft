/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmazan <tmazan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 12:19:10 by tmazan            #+#    #+#             */
/*   Updated: 2024/05/30 11:30:12 by tmazan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlist;
	t_list	*newnode;
	void	*set;

	if (!lst || !f || !del)
		return (NULL);
	newlist = NULL;
	while (lst != 0)
	{
		set = f(lst->content);
		newnode = ft_lstnew(set);
		if (newnode == 0)
		{
			del(set);
			ft_lstclear(&newlist, (*del));
			return (newlist);
		}
		ft_lstadd_back(&newlist, newnode);
		lst = lst->next;
	}
	return (newlist);
}
