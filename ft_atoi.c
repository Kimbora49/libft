/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 14:12:28 by marvin            #+#    #+#             */
/*   Updated: 2024/03/22 14:12:28 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <stdlib.h>
#include "libft.h"

int ft_atoi(const char *nptr)
{
    int nbr;
    int signe;
    int i;

    nbr = 0;
    signe = 1;
    i = 0;
    while (nptr[i] == ' ' || (nptr[i] >= 9 && nptr[i] <= 13))
        i++;
    if (nptr[i] == '-' || nptr[i] == '+')
    {
        if (nptr[i] == '-')
            signe *= (-1);
        i++;
    }
    while (nptr[i] >= 48 && nptr[i] <= 57)
        nbr = (nbr * 10) + (nptr[i++] - 48);
    return (nbr * signe);
}

// int main(void)
// {
//     char nptr[] = "-2147483648";

//     printf("atoi    : %d\n", atoi(nptr));
//     printf("ft_atoi : %d\n", ft_atoi(nptr));
// }