/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 13:25:21 by marvin            #+#    #+#             */
/*   Updated: 2024/03/20 13:25:21 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <ctype.h> //DELETE
// #include <stdio.h> //DELETE

int ft_isdigit(int c)
{
    if (c >= 48 && c <= 57)
        return (2048);
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