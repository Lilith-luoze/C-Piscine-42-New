/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luozguo <luozguo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 20:17:39 by luozguo           #+#    #+#             */
/*   Updated: 2025/05/08 14:36:35 by luozguo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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
		{
			while (c <= '9')
			{
				while (d <= '9')
				{
					write(1, &a, 1);
					write(1, &b, 1);
					write(1, " ", 1);
					write(1, &c, 1);
					write(1, &d, 1);
					if (!(a == '9' && b == '8' && c == '9' && d == '9'))
						write(1, ", ", 2);
					d++;
				}
				c++;
				d = '0';
			}
			b++;
			if (b == '9')
			{
				c = a + 1;
				d = '0';
			}
			else 
			{
				c = a;
				d = b + 1;
			}
		}
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