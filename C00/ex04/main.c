#include<unistd.h>
void	ft_is_negative(int n);

int	main(void)
{
	int	i;

	i = -2;
	while (i <= 2)
	{
		ft_is_negative(i);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}
