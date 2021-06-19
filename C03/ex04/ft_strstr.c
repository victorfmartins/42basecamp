int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	idx;

	idx = 0;
	while ((s1[idx] || s2[idx]) && idx < n)
	{
		if (s1[idx] != s2[idx])
			return ((unsigned char)s1[idx] - (unsigned char)s2[idx]);
		idx++;
	}
	return (0);
}

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int	to_find_len;
	unsigned int	idx;

	to_find_len = 0;
	while (to_find[to_find_len])
		to_find_len++;
	idx = 0;
	if (!to_find[idx])
		return (str + idx);
	while (str[idx])
	{
		if (ft_strncmp(&str[idx], to_find, to_find_len) == 0)
			return (&str[idx]);
		idx++;
	}
	return (0);
}
