#include <unistd.h>
int	ft_int_powANDft_ndig(int nb, int base, int exp, int choice)
{
	int	both;

	if (choice)
	{
		both = 1;
		while (exp > 0)
		{
			both = both * base;
			exp--;
		}
		return (both);
	}
	else
	{
		both = 0;
		while (nb != 0)
		{
			nb = nb / 10;
			both++;
		}
		return (both);
	}
}

int	ft_right_digit_is_bigger(int nb)
{
	int	mod;
	int	smallest;
	int	boo;

	boo = 1;
	smallest = 10;
	while (nb != 0)
	{
		mod = nb % 10;
		nb = nb / 10;
		if (mod < smallest)
			smallest = mod;
		else
		{
			boo = 0;
			break ;
		}
	}
	return (boo);
}

void	ft_putnbr(int nb)
{
	int		div;
	int		ndig;
	char	test;

	if (nb == 0)
		write(1, "0", 1);
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = nb * (-1);
	}
	ndig = ft_int_powANDft_ndig(nb, 1, 1, 0);
	while (nb != 0)
	{
		div = nb / ft_int_powANDft_ndig(1, 10, ndig - 1, 1);
		test = 48 + div;
		write(1, &test, 1);
		nb = nb % ft_int_powANDft_ndig(1, 10, ndig - 1, 1);
		ndig--;
	}
}

int	ft_set_up(int n, int choice)
{
	int	result;
	int	cont;

	result = 0;
	cont = 0;
	if (choice)
	{
		while (cont < n) // n == 3, cont = 2, result = 1
		{
			result = 0 + cont;
			cont++;
		}
	}
	else
	{
		while (cont < n)
		{
			result = result + (9 - cont) * ft_int_powANDft_ndig(1, 10, cont, 1);
			cont++;
		}
	}
	return (result);
}

void	ft_print_combn(int n)
{
	int	nb;
	int	aux;

	nb = ft_set_up(n, 1);
	aux = ft_set_up(n, 0);
	while (nb <= aux)
	{
		if (ft_right_digit_is_bigger(nb))
		{
			if (nb < ft_int_powANDft_ndig(1, 10, n - 1, 1) && nb != 0)
				write(1, "0", 1);
			ft_putnbr(nb);
			if (nb != aux)
				write(1, ", ", 2);
			if (n == 9 && nb == 23456789)
				nb = 123456788;
		}
		nb++;
	}
}
