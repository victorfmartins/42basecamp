int	ft_str_is_printable(char *str)
{
	int	idx;

	idx = 0;
	while (str[idx])
	{
		if (str[idx] < 32 || str[idx] >= 127)
			return (0);
		idx++;
	}
	return (1);
}
