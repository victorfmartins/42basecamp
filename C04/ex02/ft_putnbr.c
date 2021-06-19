#include <unistd.h>

void	ft_print_num(int nb)
{
	int		cont;
	int		keep_cont;
	char	num_inv[10];
	char	num[10];

	cont = 0;
	while (nb != 0)
	{
		num_inv[cont] = 48 + nb % 10;
		nb = nb / 10;
		cont++;
	}
	keep_cont = cont;
	cont = 1;
	while (cont <= keep_cont)
	{
		num[cont - 1] = num_inv[keep_cont - cont];
		cont++;
	}
	write(1, num, keep_cont);
}

void	ft_putnbr(int nb)
{
	if (nb == 0)
		write(1, "0", 1);
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = nb * (-1);
	}
	ft_print_num(nb);
}
