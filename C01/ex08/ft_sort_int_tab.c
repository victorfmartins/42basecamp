void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	idx;
	int	idx_of_search;
	int	curr_min_idx;

	if (size <= 1)
		return ;
	idx = 0;
	curr_min_idx = 0;
	while (idx < size)
	{
		idx_of_search = idx + 1;
		while (idx_of_search < size)
		{
			if (tab[curr_min_idx] > tab[idx_of_search])
				curr_min_idx = idx_of_search;
			idx_of_search++;
		}
		ft_swap(&tab[idx], &tab[curr_min_idx]);
		idx++;
		curr_min_idx = idx;
	}
}
