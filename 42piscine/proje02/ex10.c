// gitten yardımla yazıldı tekrar bakılacak
#include <stdio.h>

int ft_strlen(char *dest)
{
    int i;
    i = 0;
    while (dest[i])
    {
        i++;
    }
    return i;
}

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
    unsigned int i;
    unsigned int j;

    j = ft_strlen(dest) + ft_strlen(src); 
    i = 0;
    if (size != 0)
    {
        while (src[i] && i < size - 1)
        {
            dest[i] = src[i];
            i++;
        } 
        dest[i] = '\0';
    }
    return j;
}

int main()
{
    char src[] = "hakan ";
    char dest[] = "aaaaaaaaaa";
    printf("%d | %s", ft_strlcpy(dest, src, 5), dest);
}