void	put_basic4(int ***matriz, int ***restrictions, int row, int col);

void	put_basic1(int ***matriz, int ***restrictions, int row, int col)
{
	if (row == 0)
	{
		if ((*restrictions)[0][col] == 1)
			(*matriz)[0][col] = 4;
		else
			(*matriz)[3][col] = 4;
	}
	else
	{
		if ((*restrictions)[2][col] == 1)
			(*matriz)[col][0] = 4;
		else
			(*matriz)[col][3] = 4;
	}
}

void	put_basic12(int ***matriz, int ***restrictions, int row, int col)
{
	if (row == 0)
	{
		if ((*restrictions)[row][col] == 1)
			(*matriz)[3][col] = 3;
		else
			(*matriz)[0][col] = 3;
	}
	else
	{
		if ((*restrictions)[row][col] == 1)
			(*matriz)[col][3] = 3;
		else
			(*matriz)[col][0] = 3;
	}
}

void	put_basic23(int ***matriz, int ***restrictions, int row, int col)
{
	if (row == 0)
	{
		if ((*restrictions)[row][col] == 2)
			(*matriz)[1][col] = 4;
		else
			(*matriz)[2][col] = 4;
	}
	else
	{
		if ((*restrictions)[row][col] == 2)
			(*matriz)[col][1] = 4;
		else
			(*matriz)[col][2] = 4;
	}
}

void	put_basic(int ***matriz, int ***r)
{
	int	row;
	int	col;

	row = 0;
	while (row < 3)
	{
		col = 0;
		while (col < 4)
		{
			if ((*r)[row][col] == 1 || (*r)[row + 1][col] == 1)
				put_basic1(matriz, r, row, col);
			if ((*r)[row][col] == 4 || (*r)[row + 1][col] == 4)
				put_basic4(matriz, r, row, col);
			if ((*r)[row][col] == 1 && (*r)[row + 1][col] == 2)
				put_basic12(matriz, r, row, col);
			if ((*r)[row][col] == 2 && (*r)[row + 1][col] == 1)
				put_basic12(matriz, r, row, col);
			if ((*r)[row][col] == 2 && (*r)[row + 1][col] == 3)
				put_basic23(matriz, r, row, col);
			if ((*r)[row][col] == 3 && (*r)[row + 1][col] == 2)
				put_basic23(matriz, r, row, col);
			col++;
		}
		row += 2;
	}
}
