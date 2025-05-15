/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luozguo <luozguo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 14:57:07 by luozguo           #+#    #+#             */
/*   Updated: 2025/05/15 15:41:27 by luozguo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>

void	put_ascii_num_hex(char *str)
{
	int		a;
	char	hx_num[2];
	char	*hex;

	a = *str;
	hex = "0123456789abcdef";
	hx_num[0] = *(hex + a / 16);
	hx_num[1] = *(hex + a % 16);
	write(1, "\\", 1);
	write(1, hx_num, 2);
}

// printable : 32-126
void	ft_putstr_non_printable(char *str)
{
	while (*str)
	{
		if (*str >= 32 && *str <= 126)
			write(1, str, 1);
		else
			put_ascii_num_hex(str);
		str++;
	}
}

// int main()
// {
//     char *str = "i am\ntom\0";
//     ft_putstr_non_printable(str);
//     return (0);
// }