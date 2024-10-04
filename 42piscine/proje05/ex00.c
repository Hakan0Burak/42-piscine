#include <stdio.h>

int ft_iterative_factorial(int nb)
{
    int i;

    i = nb;
    while (--i >= 1)
        nb *= i;
    if (nb == 0 || nb == 1)
        return 1;
    return nb;
}

int main()
{
    printf("%d", ft_iterative_factorial(12));
    return 0;
}