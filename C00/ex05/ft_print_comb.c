/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthomas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/06 16:16:48 by mthomas           #+#    #+#             */
/*   Updated: 2020/02/08 11:52:22 by mthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c,1);
}

void	ft_stop(char a, char b, char c)
{
	ft_putchar(a);
	ft_putchar(b);
	ft_putchar(c);
	if (a != '7' || b != '8' || c != '9')
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	char a;
	char b;
	char c;

	a='0';
	while (a <= '7')
	{
		b=a+1;
		while (b <= '8')
		{
			c=b+1;
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

int	main(void)
{
	ft_print_comb();
}
