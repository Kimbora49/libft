/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 11:51:53 by tmazan            #+#    #+#             */
/*   Updated: 2024/05/28 16:23:01 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list *temp;

	temp = *lst;
	if (new == NULL)
		return ;
	if (*lst == NULL)
	{
		*lst = temp;
		return ;
	} 
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = new;
}
