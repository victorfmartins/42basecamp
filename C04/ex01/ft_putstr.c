#include<unistd.h>
void	ft_putstr(char *str)
{
	int	index;

	index = -1;
	while (str[++index] != '\0')
		write(1, str + index, 1);
}
