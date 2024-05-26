/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmazan <tmazan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 16:38:03 by tmazan            #+#    #+#             */
/*   Updated: 2024/05/26 11:15:00 by tmazan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

int count_size(int  n)
{
    int i;
    
    i = 0;
   while(n != 0)
   {
    n = n / 10;
    i++;
   }
   return (i);
}

char    *ft_itoa(int num)
{
    char        *dest; //tableau a renvoyer contenant le char
    int         count; //size de n
    int         i; //se balader dans le tableau, delimiter le signe au debut pour ne pas l'ecraser avec count
    long int    n; //ne pas avoir de probleme d'overfload int

    n = num;
    count = count_size(n);
    i = 0;
    if(n < 0 || count == 0) // soit n<0 et il nous faut une place en plus pour le signe, soit count == 0 et il nous faut une place en plus pour le 0
    {
        count++;
    }
    dest = (char *)malloc((count_size(n)) * sizeof(char)); //allouer la place pour dest
    
    i = 0;
    if(dest == NULL) // securiser
    {
        return NULL;
    }
    if(n < 0) //placer le signe dans le tableau
    {
        n = n * (-1); //mettre le nombre au positif
        dest[0] = '-'; //noter le signe au premier placement du tableau
        i++; //passer a la place suivante
    }
    while(count > i) //placer les chiffres en partant de la fin du tableau pour s'arreter au moment ou l'on croise i
    {
        count--; //on decremente avant car la derniere place n'existe pas et ce qui resultera en seg fault, 
        //premier indice du tableau = 0, premier indice de count = 1. 4 places (count) pour 5 (tab) = seg fault 
        dest[count] = (n % 10) + '0'; 
        n = n / 10; // 180 = 18, 18 = 1 etc..
    }
    return (dest);
}

int main(void)
{
    printf("%s", ft_itoa(14554));
}