/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luozguo <luozguo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 14:57:03 by luozguo           #+#    #+#             */
/*   Updated: 2025/05/15 15:10:50 by luozguo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>

//  ascii is 100 or 200, which needs two digits in hex to represent one char.
// So write a function to print that char.
void	wrt_hex_per_char(char *a)
{
	int		dst;
	char	*hex;

	hex = "0123456789abcdef";
	dst = (*a) / 16;
	write(1, hex + dst, 1);
	dst = (*a) % 16;
	write(1, hex + dst, 1);
}

void	prt_addrs_hex(unsigned long addr_digits)
{
	char	*hex;
	char	str_hex[16];
	int		i;

	hex = "0123456789abcdef";
	i = 0;
	while (i < 16)
	{
		str_hex[15 - i] = *(hex + addr_digits % 16);
		addr_digits /= 16;
		i++;
	}
	write(1, str_hex, 16);
	write(1, ": ", 2);
}
// 32-126

void	prt_content_hex(char *addr, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (i < size)
	{
		wrt_hex_per_char(addr + i);
		if (i % 2 == 1)
			write(1, " ", 1);
		i++;
	}
	while (i < 16)
	{
		write(1, "  ", 2);
		if (i % 2 == 1)
			write(1, " ", 1);
		i++;
	}
}

void	prt_content_ascii(char *str, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (i < size)
	{
		if (str[i] >= 32 && str[i] <= 126)
			write(1, str + i, 1);
		else
			write(1, ".", 1);
		i++;
	}
	write(1, "\n", 1);
}

// deal with the problem of passing less than / more than 16
void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	part_size;
	unsigned int	offset;
	char			*str;

	offset = 0;
	str = (char *)addr;
	if (size == 0)
		return (NULL);
	part_size = 16;
	while (offset < size)
	{
		if (size - offset < 16)
			part_size = size - offset;
		prt_addrs_hex((unsigned long)(str + offset));
		prt_content_hex(str + offset, part_size);
		prt_content_ascii(str + offset, part_size);
		offset += 16;
	}
	return (addr);
}

// int main()
// {
//     char str[] = "Bonjour les aminches..c.est.";
//     // printf("%lu", sizeof(str));

//     ft_print_memory(str, sizeof(str)-1);
//     return (0);
// }
