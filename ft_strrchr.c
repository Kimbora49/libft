/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 17:30:06 by tmazan            #+#    #+#             */
/*   Updated: 2024/05/28 15:30:21 by marvin           ###   ########.fr       */
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
		i--;
		if (str[i] == (char)c)
			return (str + i);
	}
	return (NULL);
}
