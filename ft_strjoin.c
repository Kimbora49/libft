/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmazan <tmazan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 15:18:55 by tmazan            #+#    #+#             */
/*   Updated: 2024/05/27 15:50:10 by tmazan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
