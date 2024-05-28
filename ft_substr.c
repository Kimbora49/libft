/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 14:01:42 by tmazan            #+#    #+#             */
/*   Updated: 2024/05/28 15:59:09 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    size_t	i;
    char			*news;

	if (!s || start >= ft_strlen(s))
		return (ft_strdup(""));
	if (ft_strlen(s) - start < len)
		len = ft_strlen(s) - start;
    news = (char *)malloc((len + 1) * sizeof(char));
    if (!news || !s)
	    return NULL;
	i = 0;
	while (s[start + i] && i < len)
	{
		news[i] = s[start + i];
		i++;
	}
	news[i] = '\0';
	return (news);
}
