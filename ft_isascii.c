/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 13:48:34 by marvin            #+#    #+#             */
/*   Updated: 2024/03/20 13:48:34 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <ctype.h> //DELETE
// #include <stdio.h> //DELETE

int ft_isascii(int c)
{
    if (c >= 0 && c <= 127)
        return (1);
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