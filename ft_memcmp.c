/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmazan <tmazan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 19:19:52 by tmazan            #+#    #+#             */
/*   Updated: 2024/05/27 15:46:54 by tmazan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    size_t i;
    char *str1;
    char *str2;

    str1 = (char *)s1;
    str2 = (char *)s2;
    i = 0;
    while(str1[i] && str2[i] && i < n - 1)
    {
        if (str1[i] - str2[i] != 0)
            return (str1[i] - str2[i]);
        i++;
    }
    return (str1[i] - str2[i]);
}
