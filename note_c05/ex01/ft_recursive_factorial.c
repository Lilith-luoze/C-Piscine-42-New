/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luozguo <luozguo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 14:40:17 by luozguo           #+#    #+#             */
/*   Updated: 2025/05/19 14:40:34 by luozguo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb <= -1)
		return (0);
	if (nb == 0)
		return (1);
	return (nb * ft_recursive_factorial(nb - 1));
}

// # include <stdio.h>
// # include <string.h>
// # include <unistd.h>
// # include <ctype.h>
// int main()
// {
//     printf("%i\n", ft_recursive_factorial(3));
//     return (0);
// }