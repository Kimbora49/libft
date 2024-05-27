/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmazan <tmazan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 17:30:06 by tmazan            #+#    #+#             */
/*   Updated: 2024/05/27 15:51:18 by tmazan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
