/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmazan <tmazan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 16:10:06 by tmazan            #+#    #+#             */
/*   Updated: 2024/05/24 16:19:17 by tmazan           ###   ########.fr       */
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

int main ()
{
	char c = 'n';
	t_list *test;
	test = ft_lstnew(&c);
    printf("%d\n", *((char *)test->content));
}