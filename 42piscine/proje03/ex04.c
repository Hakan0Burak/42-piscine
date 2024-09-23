// gitten yardım alınarak yazıldı tekrar edilecek
#include <stdio.h>

char *ft_strstr(char *str, char *to_find)
{
    int i;
    int j;

    i = 0;
    j = 0;
    if (to_find[j] == '\0')
        return (str);
    while (str[i])
    {
        while (str[i + j] == to_find[j] && str[i + j] != '\0')
            j++;
        if (to_find[j] == '\0')
        {
            return (str + i);
        }
        i++;
        j = 0;
    }
    return 0;
}

int main()
{
    char str[] = "hakan, adil, oğuz, alp";
    char to_find[] = "adil";
    printf("%s", ft_strstr(str,to_find));
}