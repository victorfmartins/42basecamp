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

int	ft_find_next_prime(int nb)
{
	if (ft_is_prime(nb))
		return (nb);
	return (ft_find_next_prime(nb + 1));
}
