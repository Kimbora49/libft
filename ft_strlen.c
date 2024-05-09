/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 13:59:11 by marvin            #+#    #+#             */
/*   Updated: 2024/03/20 13:59:11 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <string.h> //DELETE
// #include <stdio.h> //DELETE

size_t ft_strlen(const char *s)
{
    int i;

    i = 0;
    while (s[i++]);
    return (i - 1);
}

//DELETE
// int main(void)
// {
//     char s[] = "Salut a tous !";

//     printf("%s : ", s);
//     printf("%ld : ", strlen(s));
//     printf("%ld\n", ft_strlen(s));
// }