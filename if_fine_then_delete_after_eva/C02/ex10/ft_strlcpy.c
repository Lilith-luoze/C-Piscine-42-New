/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luozguo <luozguo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 14:57:12 by luozguo           #+#    #+#             */
/*   Updated: 2025/05/15 15:09:18 by luozguo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while ((i < size - 1) && (src[i]))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	while (src[i])
	{
		i++;
	}
	return (i);
}

// int main()
// {
//     char src[] = "hey how are you?\0";
//     char dst_ft[5];
//     char dst_builtin[5];

//     printf("%u\n", ft_strlcpy(dst_ft, src, sizeof(dst_ft)));
//     printf("%zu\n", strlcpy(dst_builtin, src, sizeof(dst_builtin)));
//     printf("%s\n", dst_ft);
//     printf("%s\n", dst_builtin);

//     return (0);

// }
