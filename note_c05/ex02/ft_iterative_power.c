/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luozguo <luozguo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 14:40:14 by luozguo           #+#    #+#             */
/*   Updated: 2025/05/19 14:40:39 by luozguo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	multi;

	multi = 1;
	if (power < 0)
		return (0);
	while (power)
	{
		multi = multi * nb;
		power--;
	}
	return (multi);
}
// # include <stdio.h>

// int main()
// {
//     int b = ft_iterative_power(0 , -1);
//     printf("%i", b);
// }