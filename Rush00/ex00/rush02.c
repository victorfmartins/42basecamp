void	ft_putchar(char c);
char	get_corner_char(int curr_y, int max_y)
{
	if (curr_y == 0)
	{
		return ('A');
	}
	else if (curr_y == max_y)
	{
		return ('C');
	}
	else
	{
		return (0);
	}
}

void	print_line(int curr_y, int max_x, int max_y)
{
	int		i;
	char	c_corner;

	c_corner = get_corner_char(curr_y, max_y);
	i = 0;
	while (i <= max_x)
	{
		if (c_corner == 0 && i != 0 && i != max_x)
		{
			ft_putchar(' ');
		}
		else if (c_corner != 0 && (i == 0 || i == max_x))
		{
			ft_putchar(c_corner);
		}
		else
		{
			ft_putchar('B');
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
