#include<unistd.h>
int	ft_atoi(char *str)
{
	int	idx;
	int	sign;
	int	result;

	idx = 0;
	while ((str[idx] >= 9 && str[idx] <= 13) || str[idx] == 32)
		idx++;
	sign = 0;
	while (str[idx] == '-' || str[idx] == '+')
		if (str[idx++] == '-')
			sign++;
	result = 0;
	while (str[idx] >= '0' && str[idx] <= '9')
	{
		result = (result * 10) + (str[idx] - '0');
		idx++;
	}
	if (sign % 2 == 1)
		result *= (-1);
	return (result);
}
