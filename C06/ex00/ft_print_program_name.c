#include<unistd.h>
void	ft_print_program_name(int argc, char **argv)
{
	int	idx;

	argc--;
	idx = 0;
	while (argv[0][idx])
	{
		write(1, &argv[0][idx], 1);
		idx++;
	}
	write(1, "\n", 1);
}

int	main(int argc, char **argv)
{
	ft_print_program_name(argc, argv);
	return (0);
}
