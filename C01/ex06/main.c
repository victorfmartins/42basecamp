#include<unistd.h>
#include<stdlib.h>
#include<string.h>
int	ft_strlen(char *str);
void	ft_putnbr(int nb);

int	main(void)
{
	char	*str2;
	int		len;

	str2 = malloc(42 * sizeof(char));
	strcpy(str2, "0123456789abcdef\n");
	len = ft_strlen(str2);
	ft_putnbr(len);
}
