#include <unistd.h>

void 	ft_a(char a)
{
	write(1, &a, 1);
}

void	ft_stop(char a, char b, char c)
{
	ft_a(a);
	ft_a(b);
	ft_a(c);
	if (a !=7 || b !=8 || c !=9) 
	{
		ft_a(',');
		ft_a(' ');
	}
}

int main(void)
{
	char a;
	char b;
	char c;
	
	a = '0';
	while (a <= '7')
	{
		b = a+1;
		while (b <= '8')
		{
			c = b+1;
			while (c <= '9')
			{
				ft_stop(a, b, c);
				c++;
			}
			b++;
		}
		a++;
	}
}
