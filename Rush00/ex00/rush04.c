#include<stdio.h>
void	ft_putchar(char c);

char	get_corner_char(int x, int y, int max_x, int max_y)
{
	if ((x == 0 && y == 0) || (x == max_x && y == max_y && y != 0 && x != 0))
	{
		return ('A');
	}
	else if ((x == max_x && y == 0) || (x == 0 && y == max_y))
	{
		return ('C');
	}
	else
	{
		return (0);
	}
}

void	print_line(int y, int max_x, int max_y)
{
	int		i;
	char	c_corner;

	i = 0;
	while (i <= max_x)
	{
		c_corner = get_corner_char(i, y, max_x, max_y);
		if (c_corner != 0)
		{
			ft_putchar(c_corner);
		}
		else if (i == 0 || i == max_x || y == 0 || y == max_y)
		{
			ft_putchar('B');
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
