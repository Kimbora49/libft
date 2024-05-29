/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmazan <tmazan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 17:30:06 by tmazan            #+#    #+#             */
/*   Updated: 2024/05/29 15:23:24 by tmazan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	while (i > 0)
	{
		if ((unsigned char) s[i] == (unsigned char) c)
			return ((char *)s + i);
		i--;
	}
	if ((unsigned char) s[i] == (unsigned char) c)
		return ((char *)s + i);
	return (NULL);
}
