/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 19:19:52 by tmazan            #+#    #+#             */
/*   Updated: 2024/05/28 15:48:58 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    size_t i;
    const unsigned char *str1;
    const unsigned char *str2;

    str1 = (const unsigned char *)s1;
    str2 = (const unsigned char *)s2;
    if((str1 == NULL && str2 == NULL) || (n == 0))
        return (0);
    i = 0;
    while(str1[i] == str2[i] && i < n - 1)
    {
        if (str1[i] != str2[i])
            return (str1[i] - str2[i]);
        i++;
    }
    return (str1[i] - str2[i]);
}
