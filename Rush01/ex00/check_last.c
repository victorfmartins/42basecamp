#include<unistd.h>
#include<stdio.h>
int	find_last_in_col(int ***matriz, int num)
{
	int	row;
	int	col;
	int	cont_row;

	col = 0;
	while (col < 4)
	{
		row = 0;
		cont_row = 0;
		while (row < 4)
		{
			if ((*matriz)[row][col] != num)
				cont_row = cont_row + 1;
			if (cont_row == 4)
				return (col);
			row = row + 1;
		}
		col = col + 1;
	}
	return (5);
}

int	find_last_in_row(int ***matriz, int num)
{
	int	row;
	int	col;
	int	cont_col;

	row = 0;
	while (row < 4)
	{
		col = 0;
		cont_col = 0;
		while (col < 4)
		{
			if ((*matriz)[row][col] != num)
				cont_col = cont_col + 1;
			if (cont_col == 4)
				return (row);
			col = col + 1;
		}
		row = row + 1;
	}
	return (5);
}

void	put_last(int ***matriz, int num)
{
	int	row;
	int	col;

	row = find_last_in_row(matriz, num);
	col = find_last_in_col(matriz, num);
	if (row != 5 && col != 5)
		(*matriz)[row][col] = num;
}

void	check_last(int ***matriz)
{
	int	cont_num;
	int	num;
	int	row;
	int	col;

	num = 4;
	while (num > 0)
	{
		row = 0;
		cont_num = 0;
		while (row < 4)
		{
			col = 0;
			while (col < 4)
			{
				if ((*matriz)[row][col] == num)
					cont_num = cont_num + 1;
				col = col + 1;
			}
			row = row + 1;
		}
		if (cont_num == 3)
			put_last(matriz, num);
		num = num - 1;
	}
}
