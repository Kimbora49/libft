/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmazan <tmazan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 14:55:03 by tmazan            #+#    #+#             */
/*   Updated: 2024/05/20 19:18:34 by tmazan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <string.h>
// #include <stdio.h>
#include <stdlib.h>
#include "libft.h"

char *ft_strdup(const char *s)
{
    int i;
    char *dest;

    i = 0;
    dest = (char *)malloc(ft_strlen(s) * sizeof(char));
    if (dest == NULL)
        return NULL;
    while (s[i])
    {
        dest[i] = s[i];
        i++;
    }
    return (dest);
}

// int main(void)
// {
//     const char *s = "Salutations";

//     printf("%s\n", ft_strdup(s));
//     printf("%s", strdup(s));
// }