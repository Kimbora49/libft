/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 13:57:26 by marvin            #+#    #+#             */
/*   Updated: 2024/03/21 13:57:26 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_bzero(void *s, size_t n)
{
    size_t i;
    char *chars;

    chars = s;
    i = 0;
    if (s == NULL)
        return ;
    while (i < n)
    {
        *chars = '\0';
        chars++;
        i++;
    }
    return ;
}
