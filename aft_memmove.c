#include <string.h>
#include <stdio.h>

// void *ft_memmove(void *dest, const void *src, size_t n)
// {
//     size_t i;
//     char *chardest;
//     const char *charsrc;

//     charsrc = src;
//     chardest = dest;
//     i = 0;
//     if (src == NULL)
//         return (NULL);
//     while (i < n && charsrc[i] && chardest[i])
//     {
//         *chardest = *charsrc;
//         chardest++;
//         charsrc++;
//         i++;
//     }

//     return (dest);
// }

int main(void)
{
    char s[] = "salut";
    char d[] = "abcdefghijk";
    size_t  n = 5;

    printf("memmove    : %p\n", memmove(d, s, n));
    printf("%s\n", d);

    // char s2[] = "salut";
    // char d2[] = "abcdefghijk";

    // printf("ft_memmove : %p\n", ft_memmove(d2, s2, n));
    // printf("%s\n", d2);
}