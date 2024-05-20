/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 13:31:03 by marvin            #+#    #+#             */
/*   Updated: 2024/03/20 13:31:03 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <ctype.h> //DELETE
// #include <stdio.h> //DELETE
#include "libft.h"

int ft_isalnum(int c)
{
    if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122) || (c >= 48 && c <= 57))
        return (8);
    return (0);
}

//DELETE
// int main(void)
// {
//     int a = -5;

//     while (a++ <= 128)
//     {
//         printf("%d : %c : ", a, a);
//         printf("%d:", isascii(a));
//         printf("%d\n", ft_isascii(a));
//     }
// }