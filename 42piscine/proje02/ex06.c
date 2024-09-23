// 32 126
#include <stdio.h>

int ft_str_is_printable(char *str)
{
    while(*str)
    {
        if (!(*str >= 32 && *str <= 126))
            return 0;
        *str++;
    }
    return 1;
}

int main()
{
    char str[] = "sbdvajsghvdj\n";
    printf("%d", ft_str_is_printable(str));
}