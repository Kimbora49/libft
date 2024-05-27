/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aft_memmove.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmazan <tmazan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 13:46:56 by tmazan            #+#    #+#             */
/*   Updated: 2024/05/20 13:46:56 by tmazan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memmove(void *dest, const void *src, size_t n)
{
    size_t i;
    char *chardest;
    const char *temp;
    const char *charsrc;

    chardest = dest;
    charsrc = src;
    temp = src;
    i = 0;
    while(i < n)
    {
        *chardest = *temp;
        chardest++;
        temp++;
        i++;
    }
    return (chardest);
}
