#include <stdio.h>
int	ft_find_next_prime(int nb);

int	main(void)
{
	int	prime;
	prime = ft_find_next_prime(-2);
	printf("%d\n", prime);
	prime = ft_find_next_prime(0);
	printf("%d\n", prime);
	prime = ft_find_next_prime(2);
	printf("%d\n", prime);
	prime = ft_find_next_prime(2147483646);
	printf("%d\n", prime);
	prime = ft_find_next_prime(12897473);
	printf("%d\n", prime);
	return (0);
}