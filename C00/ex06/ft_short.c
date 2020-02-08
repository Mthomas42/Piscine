/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthomas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 14:26:54 by mthomas           #+#    #+#             */
/*   Updated: 2020/02/08 16:56:12 by mthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_w(char r)
{
	write(1, &r, 1);
}

void	ft_stop(char a, char b, char c, char d)
{
	ft_w(a);
	ft_w(b);
	ft_w(' ');
	ft_w(c);
	ft_w(d);
	if (a != '9' || b != '8' || c != '9' || d != '9')
	{
		ft_w(',');
		ft_w(' ');
	}
}

void	ft_shortcut(char a, char b, char c, char d)
{
	while (b <= '8')
	{
		c = '0';
		while (c <= '9')
		{
			d = '0';
			while (d <= '9')
			{
				if (d == b)
				{
					d++;
				}
			ft_stop(a, b, c, d);
			d++;
			}
		c++;
		}
	b++;
	}
}


void	ft_print_comb2(void)
{
	char a, b, c, d = 0;

	while (a <= '9')
	{
		ft_shortcut(a, b, c, d);
	}
}

int	main()
{
	ft_print_comb2();
}
