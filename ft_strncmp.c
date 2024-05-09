/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 14:28:53 by marvin            #+#    #+#             */
/*   Updated: 2024/03/22 14:28:53 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <string.h>
// #include <stdio.h>

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t i;

    i = 0;
    while(s1[i] && s2[i] && i < n - 1)
    {
        if (s1[i] - s2[i] != 0)
            return (s1[i] - s2[i]);
        i++;w
    }
    return (s1[i] - s2[i]);
}

// int main(void)
// {
//     char    str1[] = "Salut a tous !";
//     char    str2[] = "salut a tous !";
//     int     n = 5;

//     printf("strncmp    : %d\n", strncmp(str1, str2, n));
//     printf("ft_strncmp : %d\n", ft_strncmp(str1, str2, n));
// }