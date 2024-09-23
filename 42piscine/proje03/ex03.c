#include <stdio.h>

char *ft_strncat(char *dest, char *src, unsigned int nb)
{
    unsigned int i;
    unsigned int j;

    i = 0;
    j = 0;
    if (nb == 0)
        return (dest);
    while(dest[j])
        j++;
    while((src[i]) && (i <= (nb - 1)))
    {
        dest[j] = src[i];
        j++;
        i++;
    }
    dest[j] = '\0';
    return dest;
}

int main()
{
    char src[] = "burak";
    char dest[] = "hakan ";
    printf("%s",ft_strncat(dest, src, 3));
}