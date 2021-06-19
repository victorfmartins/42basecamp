#include <unistd.h>

void	ft_print_num(int x)
{
	char	a;
	char	b;

	a = 48 + (x / 10);
	b = 48 + (x % 10);
	write (1, &a, 1);
	write (1, &b, 1);
}

void	ft_print_comb2(void)
{
	int	p;
	int	s;

	p = 0;
	s = 1;
	while (p <= 98)
	{
		while (s <= 99)
		{
			if (!(p == 00 && s == 01))
				write (1, ", ", 2);
			ft_print_num(p);
			write (1, " ", 1);
			ft_print_num(s);
			s++;
		}
		p++;
		s = p + 1;
	}
}
