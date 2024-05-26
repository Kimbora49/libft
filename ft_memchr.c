/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmazan <tmazan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 17:58:16 by tmazan            #+#    #+#             */
/*   Updated: 2024/05/26 11:15:10 by tmazan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	unsigned char		*str;
	unsigned char		letter;

	i = 0;
	str = (unsigned char *)s;
	letter = (unsigned char)c;
	while (n)
	{
		if (str[i] == letter)
			return (str + i);
		i++;
        n--;
	}
	return (NULL);
}

// int main(void)
// {
//     const char  *s = "Salut a tous les amis";
//     int         c = 't';
//     size_t      n = 25;

//     printf("%s", (char *)ft_memchr(s, c, n));
// }