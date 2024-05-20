/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmazan <tmazan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 17:13:40 by tmazan            #+#    #+#             */
/*   Updated: 2024/05/20 17:35:45 by tmazan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include "libft.h"

// size_t ft_strlen(const char *s)
// {
//     int i;

//     i = 0;
//     while (s[i++]);
//     return (i - 1);
// }

char	*ft_strchr(const char *s, int c)
{
	char		*str;
	size_t		i;

	str = (char *)s;
	i = 0;
	if (c == '\0')
		return (str + ft_strlen(str));
	while (str[i])
	{
		if (str[i] == c)
			return (str + i);
		i++;
	}
	return (NULL);
}

// int main(void)
// {
//     int c = 't';
//     const char *s = "salut a tous les amis";

//     printf("%s", ft_strchr(s, c));
// }