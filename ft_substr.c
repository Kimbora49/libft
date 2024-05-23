/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmazan <tmazan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 14:01:42 by tmazan            #+#    #+#             */
/*   Updated: 2024/05/23 13:54:10 by tmazan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include <stdlib.h>
#include "libft.h"

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

// int	main(void)
// {
// 	printf("%s", ft_substr("salut", 2, 30));
// }