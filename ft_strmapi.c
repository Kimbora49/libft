/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmazan <tmazan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 14:58:27 by tmazan            #+#    #+#             */
/*   Updated: 2024/05/27 15:50:54 by tmazan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    int i;
    char *news;

    i = 0;
    news = (char *)malloc(ft_strlen(s) * sizeof(char));
    if (!news)
        return NULL;
    while(s[i])
    {
        news[i] = f(i, s[i]);
        i++;
    }
    return (news);
}
