#include <stdio.h>
char *ft_strncpy(char *dest, char *src, unsigned int n)
{
    unsigned int i;
    i = 0;
    while(i <= n)
    {
        dest[i] = src[i];
        i++;
    }
    return dest;
}
int main()
{
    char dest[] = "sskbphjsbd";
    char src[] = "hakan";
    ft_strncpy(dest, src, 3);
    printf(dest);
}