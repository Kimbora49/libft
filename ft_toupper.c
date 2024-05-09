/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 15:55:17 by marvin            #+#    #+#             */
/*   Updated: 2024/03/21 15:55:17 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h> //DELETE

int ft_toupper(int c)
{
    if (c >= 97 && c <= 122)
        return (c - 32);
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