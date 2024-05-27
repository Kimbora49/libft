/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmazan <tmazan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 14:29:06 by tmazan            #+#    #+#             */
/*   Updated: 2024/05/27 17:32:33 by tmazan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void *))
{
    t_list *temp;

    if (!lst || !del)
    {
        return ;
    }
    while (*lst != NULL)
	{
        temp = (*lst)->next;
        ft_lstdelone(*lst ,del);
    	*lst = temp;
    }
    free(*lst);
}
