int	ft_sqrt(int nb)
{
	int	guess;

	guess = 1;
	while (guess < 46341 && guess * guess <= nb)
	{
		if (guess * guess == nb)
			return (guess);
		guess++;
	}
	return (0);
}
