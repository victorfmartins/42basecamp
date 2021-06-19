char	*ft_strcat(char *dest, char *src)
{
	unsigned int	dest_len;
	unsigned int	idx;

	dest_len = 0;
	while (dest[dest_len])
		dest_len++;
	idx = 0;
	while (src[idx])
	{
		dest[dest_len + idx] = src[idx];
		idx++;
	}
	dest[dest_len + idx] = '\0';
	return (dest);
}
