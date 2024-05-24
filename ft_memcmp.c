/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aft_memcmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmazan <tmazan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 19:19:52 by tmazan            #+#    #+#             */
/*   Updated: 2024/05/20 19:20:52 by tmazan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include<string.h>
// #include<stdio.h>
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

// int main()
// {
//     char *s1;
//     char *s2;
    
//     s1 = "Bonjour";
//     s2 = "BonjourN";
//     printf("Ma fonction :\n");
//     printf("%d\n", ft_memcmp(s1, s2, 15));
//     printf("Fonction de base :\n");
//     printf("%d", memcmp(s1, s2, 15));
//     return (0);
// }