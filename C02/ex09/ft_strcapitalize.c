char	*ft_strcapitalize(char *str)
{
	int	idx;

	idx = 0;
	while (str[idx])
	{
		if (str[idx] >= 'A' && str[idx] <= 'Z')
			str[idx] = str[idx] + 32;
		if (str[idx] >= 'a' && str[idx] <= 'z')
			if (!(str[idx - 1] >= 'a' && str[idx - 1] <= 'z'))
				if (!(str[idx - 1] >= 'A' && str[idx - 1] <= 'Z'))
					if (!(str[idx - 1] >= '0' && str[idx - 1] <= '9'))
						str[idx] = str[idx] - 32;
		idx++;
	}
	return (str);
}
