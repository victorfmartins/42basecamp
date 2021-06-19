#include<unistd.h>
#include<stdlib.h>
#include<string.h>
#include<stdio.h>
void ft_rev_int_tab(int *tab, int size);

int	main(void)
{
	int i;
	int	intstr[5];
	int	*p_str; 

	intstr[0] = 7;
	intstr[1] = 1;
	intstr[2] = 2;
	intstr[3] = 3;
	intstr[4] = 4;
	p_str = &intstr[0]; 

	ft_rev_int_tab(p_str, 5);
	i = 0;
	while (i < 5)
	{
		printf("%d", intstr[i]);
		i++;
	}
	printf("\n");
	//printf("%lu\n", sizeof(intstr)/4);
}
