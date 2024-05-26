/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmazan <tmazan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 14:58:27 by tmazan            #+#    #+#             */
/*   Updated: 2024/05/26 11:17:57 by tmazan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>

// size_t ft_strlen(const char *s)
// {
//     int i;

//     i = 0;
//     while (s[i++]);
//     return (i - 1);
// }

// char ft_turnz(unsigned int i, char c)
// {
//     (void) i;

//     if (c != 'a')
//         c = 'z';
//     return (c);
// }

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

// int main(void)
// {
//     printf("%s", ft_strmapi("salut a tous !", ft_turnz));
// }