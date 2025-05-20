/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luozguo <luozguo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 14:40:09 by luozguo           #+#    #+#             */
/*   Updated: 2025/05/19 14:40:43 by luozguo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//whole project is ready
int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power > 0)
		return (nb * ft_recursive_power(nb, power - 1));
	return (1);
}

// # include <stdio.h>

// int main()
// {
//     int b = ft_recursive_power(3 , 2);
//     printf("%i", b);
// }