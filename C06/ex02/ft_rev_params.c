#include<unistd.h>
void	ft_rev_params(int argc, char **argv)
{
	int	chr_idx;

	if (argc < 2)
		return ;
	while (--argc > 0)
	{
		chr_idx = 0;
		while (argv[argc][chr_idx] != '\0')
		{
			write(1, &argv[argc][chr_idx], 1);
			chr_idx++;
		}
		write(1, "\n", 1);
	}
}

int	main(int argc, char **argv)
{
	ft_rev_params(argc, argv);
	return (0);
}
