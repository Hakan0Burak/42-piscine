#include <stdio.h>
char *ft_strcpy(char *dest, char *src)
{
    *dest = '\0';
    while (*src)
    {
        *dest++ = *src++;
        *dest = '\0';
    }
    return (dest);
}

int main()
{
    char dest[] = "hakan";
    char src[] = "burak";
    ft_strcpy(dest,src);
    printf(dest);
}