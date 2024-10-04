#include <stdio.h>

int ft_iterative_power(int nb, int power)
{
    int nbr;
    nbr = nb;
    while (--power > 0)
        nbr *= nb;
}

int main()
{
    printf("%d", ft_iterative_power(7,2));
}