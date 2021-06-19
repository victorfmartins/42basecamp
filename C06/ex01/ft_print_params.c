#include<unistd.h>
void	ft_print_params(int argc, char **argv)
{
	int	idx;
	int	chr_idx;

	if (argc < 2)
		return ;
	idx = 1;
	while (idx < argc)
	{
		chr_idx = 0;
		while (argv[idx][chr_idx] != '\0')
		{
			write(1, &argv[idx][chr_idx], 1);
			chr_idx++;
		}
		write(1, "\n", 1);
		idx++;
	}
}

int	main(int argc, char **argv)
{
	ft_print_params(argc, argv);
	return (0);
}
