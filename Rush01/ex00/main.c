#include <stdlib.h>
#include<unistd.h>
void	rush01 (int ***matriz, int ***restrictions);

void	ft_put_arguments2vector(int input[], int idx, char *argv[])
{
	int	idxin;

	idx = 0;
	idxin = 0;
	input[idxin] = 0;
	while (argv[1][idx] != '\0')
	{
		if (argv[1][idx] == ' ')
		{
			input[idxin] = 0;
			idx++;
			continue ;
		}
		input[idxin] = argv[1][idx] - '0';
		idx++;
		idxin++;
	}
	idx = 0;
}

void	ft_set_restrictions(int input[], int ***restrictions)
{
	int	row;
	int	col;

	*restrictions = malloc(sizeof(int *) * 4);
	row = 0;
	while (row < 4)
	{
		col = 0;
		(*restrictions)[row] = malloc(sizeof(int) * 4);
		while (col < 4)
		{
			(*restrictions)[row][col] = input[4 * row + col];
			col++;
		}
		row++;
	}
}

void	ft_set_matriz(int ***matriz)
{
	int	row;
	int	col;

	*matriz = malloc(sizeof(int *) * 4);
	row = 0;
	while (row < 4)
	{
		col = 0;
		(*matriz)[row] = malloc(sizeof(int) * 4);
		while (col < 4)
		{
			(*matriz)[row][col] = 0;
			col++;
		}
		row++;
	}
}

void	ft_print_matriz(int **matriz)
{
	int		row;
	int		col;
	char	c;

	row = 0;
	while (row < 4)
	{
		col = 0;
		while (col < 4)
		{
			c = '0' + matriz[row][col];
			write(1, &c, 1);
			write(1, " ", 1);
			col++;
		}
		write(1, "\n", 1);
		row++;
	}
}

int	main(int argc, char **argv)
{
	int	input[16];
	int	**matriz;
	int	**restrictions;

	ft_put_arguments2vector(input, argc, argv);
	ft_set_restrictions(input, &restrictions);
	ft_set_matriz(&matriz);
	rush01(&matriz, &restrictions);
	return (0);
}

// void	ft_print_vector(int vector[], int size)
// {
// 	int	idx;
// 	idx = 0;
// 	while (idx < size)
// 	{
// 		printf("%d", vector[idx]);
// 		idx++;
// 	}
// 	printf("\n");
// }
