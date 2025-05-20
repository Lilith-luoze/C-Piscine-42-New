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


#include <unistd.h>

void	wrt_hex_per_byte(char *str)
{
	int prt;
	char	hx_char[2];
	char	*hex;

	hex = "0123456789abcdef";
	prt = (unsigned char)(*str);
	hx_char[0] = *(hex + prt / 16);
	hx_char[1] = *(hex + prt % 16);
	write(1, "\\", 1);
	write(1, hx_char, 2);
}

// printable : 32-126
void	ft_putstr_non_printable(char *str)
{
	while (*str)
	{
		if (*str >= 32 && *str <= 126)
			write(1, str, 1);
		else
			wrt_hex_per_byte(str);
		str++;
	}
}
/*1. Print all printable ASCII characters (ASCII 32–126).
  2. For everything else that a char can hold, print it as a hex code(char to int to char).*/

// #include <ctype.h>
// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     char *str = "i am\ntom\0";
//     ft_putstr_non_printable(str);
//     return (0);
// }