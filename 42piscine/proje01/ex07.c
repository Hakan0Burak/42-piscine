#include <stdio.h>
void ft_swap(int *a, int *b)
{
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}

void ft_rev_int_tab(int *tab, int size)
{
    int i = -1;
    while (++i <= size / 2)
        ft_swap(&tab[i], &tab[size - 1 -i]);
    
}

int
	main(void)
{
	int arr_len = 7;
	int arr[7] = {2, 4, 1, 5, 6, 7, 3};

	ft_rev_int_tab(arr, arr_len);

	for (int i = 0; i < arr_len; i++)
		printf("[ %d ]", arr[i]);
	printf("\n");

	return (0);
}