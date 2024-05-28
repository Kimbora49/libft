/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 12:19:10 by tmazan            #+#    #+#             */
/*   Updated: 2024/05/28 16:13:41 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlst;

	newlst = NULL;
	if (!lst || !f)
		return (NULL);
	while (lst != NULL)
	{
		ft_lstadd_back(&newlst, ft_lstnew((*f)(lst->content)));
		if (newlst == NULL)
		{
			ft_lstclear(&newlst, del);
			return (NULL);
		}
		lst = lst->next;
	}
	return (newlst);
}
