#include <unistd.h>

void	ft_is_negative(int n)
{
	char	p;
	char	q;

	p = 'P';
	q = 'N';
	if (n < 0)
	{
		write(1, &q, 1);
	}
	else
	{
		write(1, &p, 1);
	}
}
