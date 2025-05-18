/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luozguo <luozguo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 14:57:25 by luozguo           #+#    #+#             */
/*   Updated: 2025/05/15 15:01:11 by luozguo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */




char	*ft_strcpy(char *dest, char *src)
{
	char	*ori_dest;

	ori_dest = dest;
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (ori_dest);
}
// #include <string.h>
// #include <unistd.h>
// void	putstr(char *str)
// {
// 	while (*str)
// 	{
// 		write(1, str, 1);
// 		str++;
// 	}
// 	write(1, "\n", 1);
// }

// int main()
// {
//     char dest_ft[100];
//     char dest_builtin[100];
//     char *src = "try this one  (\0";
//     ft_strcpy(dest_ft, src);
//     strcpy(dest_builtin, src);
//     putstr(dest_ft);
//     putstr(dest_builtin);
//     return (0);

// }
