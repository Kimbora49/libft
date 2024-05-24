/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aft_striteri.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmazan <tmazan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 16:08:22 by tmazan            #+#    #+#             */
/*   Updated: 2024/05/23 16:34:23 by tmazan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>

void ft_void(unsigned int i, char *c)
{
    (void) i;
    (void) *c;
}

void    ft_striteri(char *s, void (*f)(unsigned int, char*))
{
    unsigned int i;

    i = 0;
    while(s[i])
    {
        f(i, &s[i]);
        i++;
    }
}

int main(void)
{
    char *s = "salut a tous !";
    
    ft_striteri(s, ft_void);
   printf("%s", s);
}