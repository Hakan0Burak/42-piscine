#include <stdio.h>

char *ft_strcat(char *dest, char *src)
{
    unsigned int i;
    unsigned int j;

    i = 0;
    j = 0;
    while (dest[j])
        j++;
    while (src[i])
    {
        dest[j] = src[i];
        j++;
        i++;
    }
    dest[j] = '\0';
    return (dest);
}

int main()
{
    char src[] = "burak";
    char dest[] = "hakan ";
    printf("%s", ft_strcat(dest, src));
}