#include <stdio.h>

int ft_strlen(char *dest)
{
    int i;

    i = 0;
    while (dest[i])
        i++;
    return (i);
}

unsigned int ft_strlcat(char *dest, char *src, unsigned int nb)
{
    unsigned int i;
    unsigned int j;

    i = 0;
    j = 0;
    int l = ft_strlen(dest) + ft_strlen(src);
    while (dest[i])
        i++;
    if (nb != 0)
    {
        while (src[j] && ((i + j) < nb - 1))
        {
            dest[i] = src[j];
            j++;
            i++;
        }
        dest[i] = '\0';
    }
    return l;
}

int main()
{
    char dest[] = "hakan ";
    char src[] = "burak";
    printf("[ %d ] %s", ft_strlcat(dest, src, 8), dest);
}