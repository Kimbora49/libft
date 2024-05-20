/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 13:50:56 by marvin            #+#    #+#             */
/*   Updated: 2024/03/20 13:50:56 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <ctype.h> //DELETE
// #include <stdio.h> //DELETE
#include "libft.h"

int ft_isprint(int c)
{
    if (c >= 32 && c <= 126)
        return (16384);
    return (0);
}

//DELETE
// int main(void)
// {
//     int a = -5;

//     while (a++ <= 128)
//     {
//         printf("%d : %c : ", a, a);
//         printf("%d:", isprint(a));
//         printf("%d\n", ft_isprint(a));
//     }
// }