#include <string.h>
#include <stdio.h>

int ft_strlen(const char *str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}

char    *ft_strnstr(const char *big, const char *little, size_t len)
{
    size_t i;
    int j;
    char *charbig;

    charbig = "NULL";
    i = 0;
    j = 0;
    while (big[i])
    {
        charbig[i] = big[i];
        i++;
    }
    i = 0;
    while(big[i] && i < len - 1)
    {
        j = 0;
        while(big[i + j] == little[j])
            j++;
        if (j == ft_strlen(little))
            return (charbig + i);
        i++;
    }
    return (NULL);
}

int main(void)
{
    char    str1[] = "Salut a tous !";
    char    str2[] = "tous";
    int     n = 20;

//    printf("strnstr    : %s\n", strstr(str1, str2));
    printf("ft_strnstr : %s\n", ft_strnstr(str1, str2, n));
}