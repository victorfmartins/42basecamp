void	ft_putchar(char c);

void	print_line(int curr_y, int max_x, int max_y)
{
	int		i;

	i = 0;
	while (i <= max_x)
	{
		if ((curr_y == 0 || curr_y == max_y) && (i == 0 || i == max_x))
		{
			ft_putchar('o');
		}
		else if ((curr_y == 0 || curr_y == max_y) && (i != 0 || i != max_x))
		{
			ft_putchar('-');
		}
		else if (i == 0 || i == max_x)
		{
			ft_putchar('|');
		}
		else
		{
			ft_putchar(' ');
		}
		i++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	i;

	if (x < 0)
		x = x * (-1);
	if (y < 0)
		y = y * (-1);
	i = 0;
	while (i < y)
	{
		print_line(i, x - 1, y - 1);
		i++;
	}
}
