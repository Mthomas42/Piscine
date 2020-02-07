#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
void	ft_print(char r)
{
	write(1, &r, 1);
}

int	main(void)
{
	int a;
	int b;
	a = 65;
	b = 66;
	
	if (a == 65)
	{
		ft_swap(&a, &b);
		write(1, &a, 1);
		write(1, &b, 1);
		write(1, "\n", 1);
		
	}
}
