#include <stdio.h>

int
	ft_sqrt(int nb)
{
	long i;

	i = 0;
	while (++i <= 46340 && i * i <= nb)
		if (i * i == nb)
			return (i);
	return (0);
}

int
	main(void)
{
	printf("[ %d ]\n", ft_sqrt(169));
	return (0);
}