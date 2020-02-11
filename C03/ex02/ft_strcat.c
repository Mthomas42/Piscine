char	*ft_strcat(char *dest, char *src)
{
	int i;
	int i2;

	i = 0;
	while( dest[i] != '\0')
		i++;
	i2 = 0;
	while(src[i2] != '\0')
	{
		dest[i + i2] = src[i2]
		i2++;
	}
	dest[i + i2] = '\0';
	return (dest);
}
