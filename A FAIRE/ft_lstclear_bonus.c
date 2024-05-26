/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmazan <tmazan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 14:29:06 by tmazan            #+#    #+#             */
/*   Updated: 2024/05/26 15:17:50 by tmazan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

void ft_lstclear(t_list **lst, void (*del)(void *));
{
    t_list *temp;

    temp = *lst;
    if (!lst || !del)
        return ;
	while (*lst->next != NULL)
	{
        tmp = *lst->next;
        ft_lstdelone(*lst ,del)
    	*lst = tmp;
    }
    free(lst);
}

void    ft_lstdelone(t_list *lst, void (*del)(void *))
{
    if (!lst || !del)
        return;
    del(lst->content);
    free(lst);
}
