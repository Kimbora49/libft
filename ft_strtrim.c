/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmazan <tmazan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 17:26:48 by tmazan            #+#    #+#             */
/*   Updated: 2024/05/21 17:55:42 by tmazan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <stdlib.h>
#include "libft.h"

// size_t ft_strlen(const char *s)
// {
//     int i;

//     i = 0;
//     while (s[i++]);
//     return (i - 1);
// }

// char    *ft_substr(char const *s, unsigned int start, size_t len)
// {
//     unsigned int	i;
//     char			*news;

// 	if(!s)
// 		return NULL;
//     news = (char *)malloc((len + 1) * sizeof(char));
//     if (!news)
// 	    return NULL;
// 	i = 0;
// 	while (s[start + i] != '\0' && i < len)
// 	{
// 		news[i] = s[start + i];
// 		i++;
// 	}
// 	news[i] = '\0';
// 	return (news);
// }

// char	*ft_strchr(const char *s, int c)
// {
// 	char		*str;
// 	size_t		i;

// 	str = (char *)s;
// 	i = 0;
// 	if (c == '\0')
// 		return (str + ft_strlen(str));
// 	while (str[i])
// 	{
// 		if (str[i] == c)
// 			return (str + i);
// 		i++;
// 	}
// 	return (NULL);
// }

char *ft_strtrim(char const *s1, char const *set)
{
    int 	i;
    int 	end;
	char	*news;

    i = 0;
    end = ft_strlen(s1);
    while (ft_strchr(set, (int)s1[end]) && end >= 0)
	{
        end--;
	}
	while (ft_strchr(set, (int)s1[i]) && i < end)
	{
		i++;
	}
	news = ft_substr(s1, i, end - i + 1);
	return (news);
}

// int	main(void)
// {
// 	printf("%s", ft_strtrim("racsalut a touscra", "car"));
// }