#include<unistd.h>
void	ft_putnbr(int nb);
void	ft_ft(int *nbr);

int	main(void)
{
	int	*nbr;
	int	a;

	nbr = &a;
	a = 0;
	ft_putnbr(*nbr);
	ft_ft(nbr);
	ft_putnbr(*nbr);
}
