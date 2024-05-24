/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmazan <tmazan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 17:41:38 by tmazan            #+#    #+#             */
/*   Updated: 2024/05/24 17:51:45 by tmazan           ###   ########.fr       */
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

int ft_lstsize(t_list *lst)
{
    int i;

    i = 0;
    while (lst)
    {
        lst = lst->next;
        i++;
    }
    return (i);
}

int main ()
{
    char *c = "Bonjour";
    char *d = "salut";
    char *e = "toi";
    t_list *lst;
    lst = malloc(sizeof(t_list));
    lst->content = c;
    lst->next = ft_lstnew(d);
    lst->next->next = ft_lstnew(e);
    printf("%s\n",(char *)lst->content);
    printf("%s\n",(char *)lst->next->content);
    printf("%s\n",(char *)lst->next->next->content);
    printf("%d\n", ft_lstsize(lst));
}