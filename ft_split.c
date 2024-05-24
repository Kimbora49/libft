/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aft_split.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmazan <tmazan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 13:18:30 by tmazan            #+#    #+#             */
/*   Updated: 2024/05/23 14:57:47 by tmazan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

size_t ft_strlen(const char *s)
{
    int i;

    i = 0;
    while (s[i++]);
    return (i - 1);
}

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    unsigned int	i;
    char			*news;

	if(!s)
		return NULL;
    news = (char *)malloc((len + 1) * sizeof(char));
    if (!news)
	    return NULL;
	i = 0;
	while (s[start + i] != '\0' && i < len)
	{
		news[i] = s[start + i];
		i++;
	}
	news[i] = '\0';
	return (news);
}

char **ft_split(char const *s, char c)
{
	char 	**tab;
	int		str;
	int		nbc;
	int		i;
	int		start;
	
	i = 0;
	nbc = 0;
	while (s[i])
	{
		if (s[i] == c)
			nbc++;
		i++;
	}
	tab = (char **)malloc((ft_strlen(s) - nbc) * sizeof(char *));
	i = 0;
	start = 0;
	str = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			tab[str] = ft_substr(s, start, i - start);
			str++;
			while (s[i] == c)
				i++;
			start = i;
		}
		i++;
	}
	if (s[i] != c)
	{
		tab[str] = ft_substr(s, start, i - start);
		tab[str + 1] = NULL;
	}
	else
		tab[str] = NULL;
	return(tab);
}

int	main(void)
{
	char **tab;
	int	i;
	
	tab = ft_split("salut;;a;tous;les;amis;!", ';');
	
	i = 0;
	while(tab[i])
	{
		printf("[%s] ", tab[i]);
		i++;
	}
}