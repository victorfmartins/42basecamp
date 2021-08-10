#include<stdlib.h>
#include<unistd.h>
void	put_basic(int ***matriz, int ***r);
void	check_last(int ***matriz);
void	ft_print_matriz(int **matriz);

void	rush01 (int ***matriz, int ***restrictions)
{
	put_basic(matriz, restrictions);
	check_last(matriz);
	ft_print_matriz(*matriz);
	write(1, "\n", 1);
}
