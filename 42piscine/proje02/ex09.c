#include <stdio.h>
char *ft_srtlowcase(char *str)
{
    int i;
    i = 0;
    while(str[i])
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 32;
        i++;
    }
    return (str); 
}

char *ft_srtcapitalize(char *str)
{
    ft_srtlowcase(str);
    
    int i;
    int j;
    
    i = 0;
    j = 1;
    while (str[i])
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            if (j)
            {
                str[i] -= 32;
                j = 0;
            }
        }
        else
        {
            j = !(str[i] >= '0' && str[i] <= '9');
        }
        i++;
    }
    return str;  
}

int main()
{
    char str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
    printf("%s", ft_srtcapitalize(str));
}