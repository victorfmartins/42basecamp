#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2);

int	main(void)
{
	char *s1;
	char *s2;
	char *s3;
	char *s4;
	char *s6;
	char s5[] = {'a', 'b', 'c', -10, -20, '\0'};
	char s7[] = {'a', 'b', 'c', -5, -20, '\0'};

	s1 = calloc(10, sizeof(char)); 
	s2 = calloc(8, sizeof(char)); 
	s3 = calloc(10, sizeof(char)); 
	s4 = calloc(10, sizeof(char)); 
	s1 = "abcde";
	s2 = "abcdefg";
	s3 = "abcdEfghi";
	s4 = "ab0defghi";
	s6 = "abcdefghijkl";
	printf("s1: %s, s2: %s, s3: %s, s4: %s, s5: %s\n", s1, s2, s3, s4, s5);
	// printf("cmp_12 = %d\n", strcmp(s1, s2));
	// printf("cmp_13 = %d\n", strcmp(s1, s3));
	// printf("cmp_14 = %d\n", strcmp(s1, s4));
	// printf("cmp_15 = %d\n", strcmp(s1, s5));
	printf("cmp_12 = %d, og_cmp_12 = %d\n", ft_strcmp(s1, s2), strcmp(s1, s2));
	printf("cmp_13 = %d, og_cmp_13 = %d\n", ft_strcmp(s1, s3), strcmp(s1, s3));
	printf("cmp_14 = %d, og_cmp_14 = %d\n", ft_strcmp(s1, s4), strcmp(s1, s4));
	printf("cmp_15 = %d, og_cmp_15 = %d\n", ft_strcmp(s1, s5), strcmp(s1, s5));
	printf("cmp_16 = %d, og_cmp_16 = %d\n", ft_strcmp(s1, s6), strcmp(s1, s6));
	printf("cmp_57 = %d, og_cmp_57 = %d\n", ft_strcmp(s5, s7), strcmp(s5, s7));

	return(0);
}
