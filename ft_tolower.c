/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 15:56:31 by marvin            #+#    #+#             */
/*   Updated: 2024/03/21 15:56:31 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h> //DELETE
#include "libft.h"

int ft_toupper(int c)
{
    if (c >= 65 && c <= 90)
        return (c + 32);
    return (0);
}

//DELETE
// int main(void)
// {
//     int a = -5;

//     while (a++ <= 128)
//     {
//         printf("%c : ", a);
//         printf("%c\n", ft_toupper(a));
//     }
// }