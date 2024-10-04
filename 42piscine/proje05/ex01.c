#include <stdio.h>
int ft_recursive_factorial(int nb)
{
    if (nb == 0 || nb == 1)
        return 1;
    else if (nb >= 2 && nb <= 12)
        return(nb * ft_recursive_factorial(nb - 1));
    return 0;
}

int main()
{
    printf("%d", ft_recursive_factorial(2));
}