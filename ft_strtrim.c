/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmazan <tmazan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 17:26:48 by tmazan            #+#    #+#             */
/*   Updated: 2024/05/29 13:39:01 by tmazan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		end;
	char	*news;

	i = 0;
	end = ft_strlen(s1);
	while (ft_strchr(set, (int)s1[end]) && end >= 0)
	{
		end--;
	}
	while (ft_strchr(set, (int)s1[i]) && i < end)
	{
		i++;
	}
	news = ft_substr(s1, i, end - i + 1);
	return (news);
}
