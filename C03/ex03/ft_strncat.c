char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int i;
	int ii;

	i = 0
	while (dest[ii])
		ii++;
	ii = 0
	while (i < nb && src[i])
	{
		dest[ii] = src[i];
		i++;
		ii++;
	}
	dest[i] = '\0';
	return (dest);
}
