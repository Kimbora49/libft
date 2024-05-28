/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 14:55:03 by tmazan            #+#    #+#             */
/*   Updated: 2024/05/28 15:53:31 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strdup(const char *s)
{
    int i;
    char *dest;

    i = 0;
    dest = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
    if (dest == NULL)
        return NULL;
    while (s[i])
    {
        dest[i] = s[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}
