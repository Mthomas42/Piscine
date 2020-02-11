unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int ii;
	unsigned int alt


	i = 0;
	result = 0;
	ii = 0;
	while (dest[i] != '\0')
		++i;
	while (src[alt] != '\0')
		++alt;
	if (size <= i)
		alt += size;
	else
		alt += i
	while (src[ii] != '\0' && i + 1 < size)
	{
		dest[i] = src[ii];
		i++;
		ii++;
	}
	dest[i] = '\0';
	return (alt);
}
