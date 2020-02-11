#include <unistd.h>

void	ft_putnbr(int nb)
{
	int i;
	int temp;
	char tab[11];

	if (nb < -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		nb = -nb;
		write(1, "-", 1);
	}
	i = 10;
	while (nb != 0)
	{
		temp = nb % 10;
		tab[i] = temp+48;
		nb /= 10;
		--i;
	}
	write(1, tab+i+1, 10-i);
}
