void	put_basic4v(int ***matriz, int ***restrictions, int col)
{
	if ((*restrictions)[0][col] == 4)
	{
		(*matriz)[0][col] = 1;
		(*matriz)[1][col] = 2;
		(*matriz)[2][col] = 3;
		(*matriz)[3][col] = 4;
	}
	else
	{
		(*matriz)[0][col] = 4;
		(*matriz)[1][col] = 3;
		(*matriz)[2][col] = 2;
		(*matriz)[3][col] = 1;
	}
}

void	put_basic4h(int ***matriz, int ***restrictions, int col)
{
	if ((*restrictions)[2][col] == 4)
	{
		(*matriz)[col][0] = 1;
		(*matriz)[col][1] = 2;
		(*matriz)[col][2] = 3;
		(*matriz)[col][3] = 4;
	}
	else
	{
		(*matriz)[col][0] = 4;
		(*matriz)[col][1] = 3;
		(*matriz)[col][2] = 2;
		(*matriz)[col][3] = 1;
	}
}

void	put_basic4(int ***matriz, int ***restrictions, int row, int col)
{
	if (row == 0)
		put_basic4v(matriz, restrictions, col);
	else
		put_basic4h(matriz, restrictions, col);
}
