/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luozguo <luozguo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 14:57:47 by luozguo           #+#    #+#             */
/*   Updated: 2025/05/15 15:09:04 by luozguo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>

char	*ft_strupcase(char *str)
{
	char	*ori_str;

	ori_str = str;
	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
			*str = *str - ('z' - 'Z');
		str++;
	}
	return (ori_str);
}

// int main()
// {
//// test if it's only a read-only string, can YOU modify it? -No.
//// char *str = "i am pow. you are POW\0";
//// printf("%s", ft_strupcase(str));

// the def successful version:
// char str[] = "i am pow. you are POW\0";

// printf("%s", ft_strupcase(str));

// return (0);

// }
