#include<unistd.h>
int	ft_ndig(int nb)
{
	int	cont;

	cont = 0;
	while (nb != 0)
	{
		nb = nb / 10;
		cont = cont + 1;
	}
	return (cont);
}

int	ft_pow(int base, int exp)
{
	int	resultado;

	resultado = 1;
	while (exp > 0 )
	{
		resultado = resultado * base;
		exp = exp - 1;
	}
	return (resultado);
}

void	ft_putnbr(int nb)
{
	char	c;
	int		num;
	int		ndig;

	if (nb == 0)
	{
		c = '0';
		write(1, &c, 1);
	}
	if (nb < 0)
	{
		c = '-';
		write(1, &c, 1);
		nb = nb * (-1);
	}
	while (nb != 0)
	{
		ndig = ft_ndig (nb);
		num = nb / ft_pow(10, (ndig - 1));
		c = 48 + num;
		write(1, &c, 1);
		nb = nb % ft_pow(10, (ndig - 1));
	}
}

void	ft_putnbrrev(int nb)
{
	char	c;
	int		num;

	while (nb != 0)
	{
		num = nb % 10;
		c = 48 + num;
		write(1, &c, 1);
		nb = nb / 10;
	}
}
