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

int ft_strlen(char *str)
{
    int len;

    len = 0;
    while (*str)
    {
        str++;
        len++;
    }
    return (len);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	int len;
	len = ft_strlen(src);

	i = 0;
	if (size == 0)
		return (len);

	while ((i < size - 1) && (src[i]))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (len);
}


// #include <ctype.h>
// #include <stdio.h>
// #include <string.h>

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
