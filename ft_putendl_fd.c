/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmazan <tmazan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 13:11:25 by tmazan            #+#    #+#             */
/*   Updated: 2024/05/21 13:18:13 by tmazan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>
#include "libft.h"

// size_t ft_strlen(const char *s)
// {
//     int i;

//     i = 0;
//     while (s[i++]);
//     return (i - 1);
// }

void ft_putendl_fd(char *s, int fd)
{
    write(fd, s, ft_strlen(s));
    write(fd, "\n", 1);
}

// int main(void)
// {
//     int     fd = 1;
//     char    *s = "Salut !";
    
//     ft_putendl_fd(s, fd);
// }