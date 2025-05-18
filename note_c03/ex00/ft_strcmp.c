/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luozguo <luozguo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 18:19:43 by luozguo           #+#    #+#             */
/*   Updated: 2025/05/15 18:19:44 by luozguo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char *str1 = "abc\0d";
//     char *str2 = "abc\0e";

//     printf("%i\n", ft_strcmp(str1 , str2));
//     printf("%i\n", strcmp(str1 , str2));

//     return (0);
// }