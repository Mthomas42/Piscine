char 	*ft_strstr(char *str, char *to_find)
{
	int i;
	int ii;

	i = 0;
	while (str[i] != '\0')
	{
		ii = 0;
		while (to_find[ii] == str[i + ii])
		{
			if (to_find[ii + 1] == '\0')
				return (str + i)
			ii++;
		}
		i++
	}
	return (0);
}
