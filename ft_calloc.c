/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmazan <tmazan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 19:21:41 by tmazan            #+#    #+#             */
/*   Updated: 2024/05/29 17:20:20 by tmazan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_safemultiply(size_t count, size_t size)
{
	size_t	size_max;

	size_max = LONG_MAX;
	if (count == 0 || size == 0)
		return (0);
	if (count > size_max / size || size > size_max / count)
		return (LONG_MAX);
	return (count * size);
}

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*tab;

	tab = malloc(ft_safemultiply(count, size));
	if (!tab)
		return (NULL);
	ft_bzero(tab, ft_safemultiply(count, size));
	return (tab);
}
