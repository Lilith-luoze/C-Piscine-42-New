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

#include <stddef.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_isfound(char *str, char *to_find)
{
	int len;
	int len_find;
	len_find = ft_strlen(to_find);
	len = 0;
	while (str[len] == to_find[len] && str[len] && to_find[len])
		len++;
	if (len_find == len)
		return (1);
	return (0);
}
//This is about logic. 
char	*ft_strstr(char *str, char *to_find)
{
	int	i;

	i = 0;
	if (*to_find == '\0')
		return (str);
	while (str[i])
	{
		if (ft_isfound(str + i, to_find))
			return(str + i);
		i++;
	}
	return (NULL);
}
// #include <stdio.h>
// #include <string.h>

// int main()
// {
// char *hay = "hey find me";
// char *needle = "wo bis du";


// if (ft_strstr(hay , needle) == NULL)
// 	printf("Result: (null)\n");
// else
// 	printf("Result: %s\n", ft_strstr(hay , needle));

// if (strstr(hay , needle) == NULL)
// 	printf("Result: (null)\n");
// else
// 	printf("Result: %s\n", strstr(hay , needle));

//     return (0);
// }