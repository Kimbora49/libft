/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 13:42:54 by marvin            #+#    #+#             */
/*   Updated: 2024/03/21 13:42:54 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <string.h>
// #include <stdio.h>
#include "libft.h"

void *ft_memset(void *s, int c, size_t n)
{
    size_t i;
    char *chars;

    chars = s;
    i = 0;
    while (i < n)
    {
        *chars = (char)c;
        chars++;
        i++;
    }
    return (s);
}

// int main(void)
// {
//     char s[] = "NULL";
//     int c = 'A';
//     size_t  n = 5;

//     printf("memset    : %p\n", memset(s, c, n));
//     printf("%s\n", s);

//     char s2[] = "NULL";
    
//     printf("ft_memset : %p\n", ft_memset(s2, c, n));
//     printf("%s\n", s2);
// }