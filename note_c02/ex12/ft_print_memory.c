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

#include <unistd.h>

void	wrt_hex_per_byte(unsigned char prt)
{
	int		i;
	char	*hex;

	hex = "0123456789abcdef";
	i = prt / 16;
	write(1, hex + i, 1);
	i = prt % 16;
	write(1, hex + i, 1);
}

void	prt_addrs_hex(unsigned long addr)
{
	char	*hex;
	char	str_hex[16];
	int		i;

	hex = "0123456789abcdef";
	i = 0;
	while (i < 16)
	{
		str_hex[15 - i] = *(hex + addr % 16);
		addr /= 16;
		i++;
	}
	write(1, str_hex, 16);
	write(1, ": ", 2);
}
// 32-126

void	prt_content_hex(unsigned char *contnt, unsigned int size)
{
	unsigned int	byte_cnt;

	byte_cnt = 0;
	while (byte_cnt < size)
	{
		wrt_hex_per_byte(contnt[byte_cnt]);
		if (byte_cnt % 2 == 1)
			write(1, " ", 1);
		byte_cnt++;
	}
	while (byte_cnt < 16)
	{
		write(1, "  ", 2);
		if (byte_cnt % 2 == 1)
			write(1, " ", 1);
		byte_cnt++;
	}
}

void	prt_content_ascii(unsigned char *str, unsigned int size)
{
	unsigned int	byte_cnt;

	byte_cnt = 0;
	while (byte_cnt < size)
	{
		if (str[byte_cnt] >= 32 && str[byte_cnt] <= 126)
			write(1, str + byte_cnt, 1);
		else
			write(1, ".", 1);
		byte_cnt++;
	}
	write(1, "\n", 1);
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	part_size;
	unsigned int	offset;
	unsigned char			*str;

	offset = 0;
	str = (unsigned char *)addr;
	part_size = 16;
	if (size == 0)
		return (NULL);
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

// #include <ctype.h>
// #include <stdio.h>
// #include <string.h>

// int main()
// {
    // char str[] = "1234567890ABCDEFHello42Piscine!";
    // printf("%lu", sizeof(str));
	// int str = 12345;
//     ft_print_memory(&str, sizeof(str));
// }
