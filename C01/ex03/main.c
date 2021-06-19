#include<unistd.h>
void	ft_putnbr(int nb);
void	ft_div_mod(int a, int b, int *div, int *mod);

int	main(void)
{
	int	a;
	int	b;
	int	div;
	int	mod;

	div = 123;
	mod = 456;
	a = 42;
	b = 8;
	ft_div_mod(a, b, &div, &mod);
	write(1, "A divisão de a por b é ", 25);
	ft_putnbr(div);
	write(1, "\nO modulo de a por b é ", 24);
	ft_putnbr(mod);
	write(1, "\n", 1);
}
