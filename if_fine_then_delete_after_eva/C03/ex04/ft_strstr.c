/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luozguo <luozguo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 18:19:54 by luozguo           #+#    #+#             */
/*   Updated: 2025/05/15 18:20:48 by luozguo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

// A bit complicated

unsigned int	lili_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (*str)
	{
		str++;
		i++;
	}
	return (i);
}

char	*lili_check_same(char *str, char *to_find)
{
	while (*str && *to_find && *str == *to_find)
	{
		str++;
		to_find++;
	}
	return (to_find);
}

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int	len_find;
	unsigned int	i;
	char			*result;

	i = 0;
	if (*to_find == '\0')
		return (str);
	len_find = lili_strlen(to_find);
	while (str[i])
	{
		if (str[i] == to_find[0])
		{
			result = lili_check_same(str + i, to_find);
			if (*result == '\0')
				return (str + i);
			i = i + (result - to_find);
		}
		else
			i++;
	}
	return (NULL);
}

// int main()
// {
//     char *to_find = "f";
//     char *src = "am i fool or smart? ";

//     printf("%s\n", ft_strstr(src , to_find));
//     printf("%s\n", strstr(src , to_find));

//     return (0);
// }