// gitten yardım alındı 
#include <stdio.h>

int ft_atoi(char *str)
{
    int i;
    int isaret;
    int sonuc;

    i = 0;
    isaret = 1;
    sonuc = 0;
    while ((str[i] >= 9 && str[i] <= 13) || (str[i] == 32))
        i++;
    while (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
            isaret *= -1;
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9')
    {
        sonuc = (str[i] - '0') + (sonuc * 10);
        i++;
    }
    return (sonuc * isaret);
}

int main()
{
    char str[] = "---+--+1234ab567";
    printf("%d", ft_atoi(str));
}