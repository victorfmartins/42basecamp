int	ft_is_prime(int nb)
{
	int	idx;

	if (nb < 2)
		return (0);
	idx = 2;
	while (idx < nb && idx < 46341)
	{
		if (nb % idx == 0)
			return (0);
		idx++;
	}
	return (1);
}
