/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aft_strlcpy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmazan <tmazan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 11:56:10 by tmazan            #+#    #+#             */
/*   Updated: 2024/05/20 11:56:10 by tmazan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include<stdio.h>
#include "libft.h"

size_t	ft_strlcpy(char * dst, const char * src, size_t siz)
{
	size_t i;

	i = 0;
	while (src[i] != '\0' && i < siz)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}

// int main(void)
// {
//     const char src[] = "d";
//     char dst[] = "hfshffdggs";
// 	size_t	siz = 1;

//     printf("%zu\n", ft_strlcpy(dst, src, siz));
// 	printf("%s", dst);
// }