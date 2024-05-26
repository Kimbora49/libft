/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstaddback_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmazan <tmazan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 11:51:53 by tmazan            #+#    #+#             */
/*   Updated: 2024/05/26 13:48:35 by tmazan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

t_list *ft_lstnew(void *lettre)
{
	t_list *lstnew;
		
	lstnew = (t_list *)malloc(sizeof(t_list));
	if (lstnew == NULL)
	{
		return NULL;
	}
	lstnew->content = lettre;
	lstnew->next = NULL;
	return  (lstnew); 
}

t_list  *ft_lstlast(t_list *lst)
{
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}

void ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list *temp;

	temp = *lst;
	if (temp == NULL || new == NULL)
		return ;
	temp = ft_lstlast(*lst);
	temp->next = new;
}

int main ()
{
	char *c = "nn";
	char *d = "ouiii";
	char *e = "GG";
	t_list *lst;
	lst = malloc(sizeof(t_list));
	t_list *new;
	new = malloc(sizeof(t_list));
	new->content = e;
	lst->content = c;
	lst->next = ft_lstnew(d);
	printf("%s\n",(char *)lst->content);
	printf("%s\n",(char *)lst->next->content);
	printf("\n");
	printf("apres ajout en back :\n");
	ft_lstadd_back(&lst, new);
	printf("%s\n",(char *)lst->content);
	printf("%s\n",(char *)lst->next->content);
	printf("%s\n",(char *)lst->next->next->content);
}