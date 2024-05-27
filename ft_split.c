/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmazan <tmazan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 13:18:30 by tmazan            #+#    #+#             */
/*   Updated: 2024/05/27 15:48:22 by tmazan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
