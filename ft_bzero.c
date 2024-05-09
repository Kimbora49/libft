/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 13:57:26 by marvin            #+#    #+#             */
/*   Updated: 2024/03/21 13:57:26 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <strings.h>
// #include <stdio.h>

void ft_bzero(void *s, size_t n)
{
    size_t i;
    char *chars;

    chars = s;
    i = 0;
    if (s == NULL)
        return ;
    while (i < n)
    {
        *chars = '\0';
        chars++;
        i++;
    }
    return ;
}

// int main(void)
// {
//     char s[] = "salut a tous";
//     size_t  n = 5;
//     size_t i = 0;

//     printf("\nbzero : \n");
//     bzero(s, n);
//     printf("%s\n", s);
//     while (i < 12)
//     {
//         printf("%c : ", s[i]);
//         i++;
//     }
//     printf("\nft_bzero : \n");
//     char s2[] = "salut a tous";
//     ft_bzero(s2, n);
//     printf("%s\n", s2);

//     i = 0;
//     while (i < 12)
//     {
//         printf("%c : ", s[i]);
//         i++;
//     }
// }