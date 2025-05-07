/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luozguo <luozguo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 20:17:27 by luozguo           #+#    #+#             */
/*   Updated: 2025/05/05 20:19:29 by luozguo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	nbr;

	nbr = '0';
	while (nbr <= '9')
	{
		write(1, &nbr, 1);
		nbr++;
	}
}

int	main(void)
{
	ft_print_numbers();
	return (0);
}