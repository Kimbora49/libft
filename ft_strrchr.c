/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmazan <tmazan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 17:30:06 by tmazan            #+#    #+#             */
/*   Updated: 2024/05/20 17:51:04 by tmazan           ###   ########.fr       */
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

char	*ft_strrchr(const char *s, int c)
{
	char		*str;
	size_t		i;

	str = (char *)s;
	i = ft_strlen(str);
	if (c == '\0')
		return (str + ft_strlen(str));
	while (i)
	{
		if (str[i] == c)
			return (str + i);
		i--;
	}
	return (NULL);
}

// int main(void)
// {
//     int c = 's';
//     const char *s = "salut a tous les amis";

//     printf("%s", ft_strrchr(s, c));
// }