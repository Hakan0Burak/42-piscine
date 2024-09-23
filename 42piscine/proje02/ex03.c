#include <stdio.h>
int ft_str_is_numeric(char *str)
{
    while(*str)
    {
        if (!(*str >= '1' && *str <= '9'))
            return 0;
        str++;

    }
    return 1;
}

int main()
{
    char str[] = "234567uhgvb";
    printf("%d", ft_str_is_numeric(str));
}