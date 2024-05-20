/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arft_strnstr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmazan <tmazan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 11:27:57 by tmazan            #+#    #+#             */
/*   Updated: 2024/05/20 11:27:57 by tmazan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <string.h>
// #include <stdio.h>
#include "libft.h"

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	int		j;

	i = 0;
	j = 0;
	while (big[i] && i < len)
	{
		j = 0;
		while (big[i + j] == little[j] && i + j < len)
			j++;
		if (j == ft_strlen(little))
			return ((char *)(big + i));
		i++;
	}
	return (NULL);
}

// int main(void)
// {
//     char    str1[] = "Salut a tous !";
//     char    str2[] = "tous";
//     int     n = 12;

//     // printf("strnstr    : %s\n", strnstr(str1, str2));
//     printf("ft_strnstr : %s\n", ft_strnstr(str1, str2, n));
// }