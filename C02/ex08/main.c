#include <stdio.h>
#include <stdlib.h>
char	*ft_strlowcase(char *str);

int	main(void)
{
	char str1[] = "abcdefghi";
	char str2[] = "AbcDefGhI";
	char str3[] = "A+c-/~GhI";

	printf("str1: %s\n", str1);
	printf("str2: %s\n", str2);
	printf("str3: %s\n", str3);
	ft_strlowcase(str1);
	ft_strlowcase(str2);
	ft_strlowcase(str3);
	printf("str1_low: %s\n", str1);
	printf("str2_low: %s\n", str2);
	printf("str3_low: %s\n", str3);
	return (0);
}