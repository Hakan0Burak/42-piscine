#include <stdio.h>

int ft_strncmp(char *s1, char *s2, unsigned int n)
{
    int i;

    i = 0;
    while((s1[i] && s2[i]) 
    && (s1[i] == s2[i]) && (i < n - 1))
        i++;
    return (s1[i] - s2[i]);
}

int main()
{
    char s1[] = "hakam";
    char s2[] = "hakan";

    printf("%d",ft_strncmp(s1,s2, 4));
}