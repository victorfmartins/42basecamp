#include<unistd.h>
void	ft_putnbr(int nb);
void	ft_swap(int *a, int *b);

int	main(void)
{
	int	*nbrA;
	int	*nbrB;
	int	a;
	int	b;

	nbrA = &a;
	nbrB = &b;
	a = 0;
	b = 1;
	ft_putnbr(*nbrA);
	write(1, " ", 1);
	ft_putnbr(*nbrB);
	write(1, "\n", 1);
	ft_swap(nbrA, nbrB);
	ft_putnbr(*nbrA);
	write(1, " ", 1);
	ft_putnbr(*nbrB);
	write(1, "\n", 1);
}
