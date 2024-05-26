/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmazan <tmazan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 15:18:55 by tmazan            #+#    #+#             */
/*   Updated: 2024/05/26 11:17:09 by tmazan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include <stdlib.h>
#include "libft.h"

// size_t ft_strlen(const char *s)
// {
//     int i;

//     i = 0;
//     while (s[i++]);
//     return (i - 1);
// }

char *ft_strjoin(char const *s1, char const *s2)
{
    char	*news;
	int		i;
	int		lens1;
	int		lens2;
	int		lentot;

	lens1 = ft_strlen(s1);
	lens2 = ft_strlen(s2);
	lentot = lens1 + lens2;
	
	news = (char *)malloc((lentot + 1) * sizeof(char));
	if (!news)
		return NULL;
	i = 0;
	while(i < lens1)
	{
		news[i] = s1[i];
		i++;
	}
	i = 0;
	while(i < lens2)
	{
		news[lens1 + i] = s2[i];
		i++;
	}
	news[lens1 + i] = '\0';
	return(news);
}

// int	main(void)
// {
// 	printf("%s", ft_strjoin("Salut", " a tous !"));
// }
