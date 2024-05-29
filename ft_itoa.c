/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmazan <tmazan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 16:38:03 by tmazan            #+#    #+#             */
/*   Updated: 2024/05/29 18:04:58 by tmazan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_size(int n)
{
	int	i;

	i = (n < 0);
	if (n == 0)
	{
		return (1);
	}
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

static char	*increment_char(char *dest, long n, long i, int count)
{
	int	j;

	j = 0;
	while (j < i - 1 - count)
	{
		dest[(i - 2) - j] = (n % 10) + 48;
		n = n / 10;
		j++;
	}
	dest[i - 1] = '\0';
	return (dest);
}

char	*ft_itoa(int num)
{
	char	*dest;
	int		count;
	long	i;
	long	n;

	count = 0;
	n = (long)num;
	i = count_size(n) + 1;
	dest = (char *)malloc((count_size(n)+ 1) * sizeof(char));
	if (dest == NULL)
	{
		return (NULL);
	}
	if (num < 0)
	{
		n = (n * -1);
		dest[0] = '-';
		count = 1;
	}
	return (increment_char(dest, n, i, count));
}
