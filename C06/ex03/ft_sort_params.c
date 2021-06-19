#include<unistd.h>
int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	idx;

	idx = 0;
	while (s1[idx] || s2[idx])
	{
		if (s1[idx] != s2[idx])
			return ((unsigned char)s1[idx] - (unsigned char)s2[idx]);
		idx++;
	}
	return (0);
}

void	ft_swap(char **a, char **b)
{
	char	*temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_print_params(int argc, char **argv)
{
	int		idx;
	int		idx_srch;
	int		idx_char;

	if (argc < 2)
		return ;
	idx = 1;
	while (idx < argc)
	{
		idx_srch = idx + 1;
		while (idx_srch < argc)
		{
			if (ft_strcmp(argv[idx], argv[idx_srch]) > 0)
				ft_swap(&argv[idx], &argv[idx_srch]);
			idx_srch++;
		}
		idx_char = -1;
		while (argv[idx][++idx_char])
			write(1, &argv[idx][idx_char], 1);
		write(1, "\n", 1);
		idx++;
	}
}

int	main(int argc, char **argv)
{
	ft_print_params(argc, argv);
	return (0);
}
