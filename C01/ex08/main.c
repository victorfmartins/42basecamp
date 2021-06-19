#include<unistd.h>
#include<stdlib.h>
#include<string.h>
#include<stdio.h>
void	ft_sort_int_tab(int *tab, int size);

int	main(void)
{
	int	i;
	int	intstr[20];
	int	*p_str; 

	intstr[0] = 0;
	intstr[1] = 89;
	intstr[2] = 2;
	intstr[3] = 3;
	intstr[4] = 4;
	intstr[5] = 6;
	intstr[6] = 5;
	intstr[7] = 9;
	intstr[8] = 7;
	intstr[9] = 4;
	intstr[10] = 11;
	intstr[11] = 18;
	intstr[12] = 12;
	intstr[13] = 23;
	intstr[14] = 14;
	intstr[15] = 0;
	intstr[16] = 81;
	intstr[17] = 2;
	intstr[18] = 3;
	intstr[19] = 4;
	p_str = &intstr[0]; 
	i = 0;
	while (i < 20)
	{
		printf("%d ", intstr[i]);
		i++;
	}
	printf("\n");
	ft_sort_int_tab(p_str, 20);
	i = 0;
	while (i < 20)
	{
		printf("%d ", intstr[i]);
		i++;
	}
	printf("\n");
	printf("%lu\n", sizeof(intstr)/4);
}
