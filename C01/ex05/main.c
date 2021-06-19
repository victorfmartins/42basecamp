#include<unistd.h>
#include<stdlib.h>
#include<string.h>

void	ft_putstr(char *str);

int	main(void)
{
/* 	char	string[5];
	char	*p_str;

	string[0] = 'a';
	string[1] = 'b';
	string[2] = 'c';
	string[3] = 'd';
	string[4] = '\0';
	p_str = &string[0];*/
	// char	*str;

	// str = calloc(42, sizeof(char));
	// strcpy(str, "Insira o texto da sua string aqui\n");

	char chain[10] = "123456789";
	ft_putstr(chain);
}
