/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 15:26:28 by marvin            #+#    #+#             */
/*   Updated: 2024/03/21 15:26:28 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <string.h>
// #include <stdio.h>
#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
    size_t i;
    char *chardest;
    const char *charsrc;

    charsrc = src;
    chardest = dest;
    i = 0;
    if (src == NULL)
        return (NULL);
    while (i < n)
    {
        *chardest = *charsrc;
        chardest++;
        charsrc++;
        i++;
    }

    return (dest + i);
}

// int main(void)
// {
//     char s[] = "salut";
//     char d[] = "abcdefghijk";
//     size_t  n = 15;

//     printf("memcpy    : %p\n", memcpy(d, s, n));
//     printf("%s\n", d);

//     char s2[] = "salut";
//     char d2[] = "abcdefghijk";

//     printf("ft_memcpy : %p\n", ft_memcpy(d2, s2, n));
//     printf("%s\n", d2);
// }