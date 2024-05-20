/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmazan <tmazan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 15:34:43 by tmazan            #+#    #+#             */
/*   Updated: 2024/05/20 17:19:47 by tmazan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t ft_strlen(const char *s)
{
    int i;

    i = 0;
    while (s[i++]);
    return (i - 1);
}

size_t  ft_strlcat(char * dst, const char * src, size_t siz)
{
	size_t	c;
	size_t	d;

	if (siz == 0)
	{
		return (ft_strlen(src));
	}
	if (siz <= ft_strlen(dst))
		return (siz + ft_strlen(src));
	c = ft_strlen(dst);
	d = 0;
	while (src[d] != '\0' && c + 1 < siz)
	{
		dst[c] = src[d];
		c++;
		d++;
	}
	dst[c] = '\0';
	return (ft_strlen(dst) + ft_strlen(&src[d]));
}

int main(void)
{
    const char src[] = "salut";
    char dst[] = "hfs";
	size_t	siz = 7;

    printf("%zu\n", ft_strlcat(dst, src, siz));
	printf("%s", dst);
}