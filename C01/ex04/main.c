#include<unistd.h>
void	ft_putnbr(int nb);
void	ft_ultimate_div_mod(int *a, int *b);

int	main(void)
{
	int	a;
	int	b;

	a = 42;
	b = 8;
	ft_ultimate_div_mod(&a, &b);
	write(1, "A divisão de a por b é ", 25);
	ft_putnbr(a);
	write(1, "\nO modulo de a por b é ", 24);
	ft_putnbr(b);
	write(1, "\n", 1);
}
