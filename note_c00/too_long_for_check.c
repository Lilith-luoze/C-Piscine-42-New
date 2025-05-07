/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luozguo <luozguo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 20:17:39 by luozguo           #+#    #+#             */
/*   Updated: 2025/05/07 19:53:51 by luozguo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	ft_prt(char a, char b, char c,char d)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, " ", 1);
	write(1, &c, 1);
	write(1, &d, 1);
	if (!(a == '9' && b == '8' && c == '9' && d == '9'))
		write(1, ", ", 2);
}

void ft_tl(char a, char b, char c,char d)
{
	while (c <= '9')
	{
		while (d <= '9')
		{
			ft_prt(a, b, c,d);
			d++;
		}
		c++;
		d = '0';
	}
	b++;
	if (b != '9')
	{
		c = a;
		d = b + 1;
	}
	else if (b == '9')
	{
		c = a + 1;
		d = '0';
	}
}

void	ft_print_comb2(void)
{
	char	a;
	char	b;
	char	c;
	char	d;

	a = '0';
	b = '0';
	c = '0';
	d = '1';
	while (a <= '9')
	{
		while (b <= '9')
			{ft_tl(a, b,c ,d);}
		a++;
		b = '0';
		c = a;
		d = '1';
	}
}

int	main(void)
{
	ft_print_comb2();
	return (0);
}