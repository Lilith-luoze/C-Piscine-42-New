/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luozguo <luozguo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 14:41:33 by luozguo           #+#    #+#             */
/*   Updated: 2025/05/19 14:41:34 by luozguo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	divisor;

	divisor = 2;
	if (nb <= 1)
		return (0);
	while (divisor <= nb / divisor)
	{
		if (nb % divisor == 0)
			return (0);
		divisor++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	while (!ft_is_prime(nb))
		nb++;
	return (nb);
}
// # include <stdio.h>
// int main()
// {
//     int nb = 14;
//     int next_prime = ft_find_next_prime(nb);
//     printf("The next prime number after %d is %d\n", nb, next_prime);
// }