#include <unistd.h>

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

void	putstr(char *str)
{
	int i;

	i = 0;
	while (str != '\0')
	{
		ft_putchar(str[i]);
		++i;
	}
}
