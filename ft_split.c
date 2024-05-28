/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 13:18:30 by tmazan            #+#    #+#             */
/*   Updated: 2024/05/28 16:05:44 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_countword(char *str, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] == c && str[i])
			i++;
		if (str[i])
			count++;
		while (str[i] != c && str[i])
			i++;
	}
	return (count);
}

static int	ft_lenword(char *str, char c)
{
	int	i;

	i = 0;
	while (str[i] && str[i] != c)
		i++;
	return (i);
}

static char	**ft_mallocerror(char **dest)
{
	unsigned int	i;

	i = 0;
	while (dest[i])
	{
		free (dest[i]);
		i++;
	}
	free(dest);
	return (NULL);
}

void	ft_addword(char **dest, char *str, int i, char c)
{
	int	j;
	int	k;

	j = 0;
	while (str[i])
	{
		k = 0;
		while (str[i] == c)
			i++;
		if (str[i])
		{
			dest[j] = malloc((sizeof(char)) * (ft_lenword(str + i, c) + 1));
			if (!dest[j])
				ft_mallocerror(dest);
			while (str[i] && str[i] != c)
			{
				dest[j][k] = str[i];
				i++;
				k++;
			}
			dest[j][k] = '\0';
			j++;
		}
	}
	dest[j] = (NULL);
}

char	**ft_split(char const *s, char c)                                   
{
	char	*str;
	char	**dest;
	int		i;

	i = 0;
	if (!s)
		return (NULL);
	str = (char *)s;
	dest = malloc(sizeof(char *) * (ft_countword(str, c) + 1));
	if (!dest)
		return (NULL);
	ft_addword(dest, str, i, c);
	return (dest);
}