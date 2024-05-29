/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmazan <tmazan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 13:18:30 by tmazan            #+#    #+#             */
/*   Updated: 2024/05/29 17:58:44 by tmazan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_countword(char const *str, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if(str[i] != c)
		{
			count++;
			while (str[i] && str[i] != c)
				i++;
		}
		else if (str[i] == c)
			i++;
	}
	return (count);
}

static int	ft_lenword(char const *str, char c)
{
	size_t	i;

	i = 0;
	while (str[i] && str[i] != c)
		i++;
	return (i);
}

static void	freeing(size_t i, char **dest)
{
	while (i > 0)
	{
		i--;
		free(dest[i]);
	}
	free(dest);

}

static char	**ft_addword(char **dest, char const *str, size_t nbwords, char c)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (i < nbwords)
	{
		while (str[j] && str[j] == c)
			j++;
		dest[i] = ft_substr(str, j, ft_lenword(&str[j], c));
		if (!dest[i])
		{
			freeing(i, dest);
			return (NULL);
		}
		while (str[j] && str[j] != c)
			j++;
		i++;
	}
	dest[i] = NULL;
	return (dest);
}

char	**ft_split(char const *s, char c)
{
	char	**dest;
	size_t	nbwords;

	if (!s)
		return (NULL);
	nbwords = ft_countword(s, c);
	dest = malloc(sizeof(char *) * (nbwords + 1));
	if (!dest)
		return (NULL);
	dest = ft_addword(dest, s, nbwords, c);
	return (dest);
}
