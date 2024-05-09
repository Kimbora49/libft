/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 13:03:46 by marvin            #+#    #+#             */
/*   Updated: 2024/03/20 13:03:46 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <ctype.h> //DELETE
// #include <stdio.h> //DELETE

int ft_isalpha(int c)
{
    if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
        return (1024);
    return (0);
}

//DELETE
// int main(void)
// {
//     int a = -5;

//     while (a++ <= 128)
//     {
//         printf("%d : %c : ", a, a);
//         printf("%d:", isalpha(a));
//         printf("%d\n", ft_isalpha(a));
//     }
// }