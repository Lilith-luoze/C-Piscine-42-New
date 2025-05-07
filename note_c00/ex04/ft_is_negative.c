/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luozguo <luozguo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 20:17:30 by luozguo           #+#    #+#             */
/*   Updated: 2025/05/05 20:19:25 by luozguo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	sign;

	sign = 'P';
	if (n >= 0)
		write(1, &sign, 1);
	else
	{
		sign = 'N';
		write(1, &sign, 1);
	}
}

int	main(void)
{
	ft_is_negative(-1);
	return (0);
}