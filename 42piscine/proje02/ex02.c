#include <stdio.h>

int ft_print_alpha(char *str)
{
    while (*str)
    {
        if (!((*str >= 'a' && *str <= 'z')
        || (*str >= 'A' && *str <= 'Z')))
            return (0);
        str++;
    }
    return (1);
}

int main()
{
    char str[] = "sfdxgchvjbkn54678";
    printf("%d",ft_print_alpha(str));
}