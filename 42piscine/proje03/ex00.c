#include <stdio.h>

int ft_strcmp(char *s1, char *s2)
{
    int i;

    i = 0;
    while (s1[i] != '\0' && s2[i] != '\0')
    {
        if (s1[i] != s2[i])
            return (s1[i] - s2[i]);
        i++;
    }
    return s1[i] - s2[i];
}

int main()
{
    char s1[] = "hakan";
    char s2[] = "hakam";

    printf("%d", ft_strcmp(s1, s2));
}