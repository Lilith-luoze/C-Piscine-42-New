/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luozguo <luozguo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 14:14:54 by luozguo           #+#    #+#             */
/*   Updated: 2025/05/15 14:51:27 by luozguo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	while (i < size / 2)
	{
		temp = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - i - 1] = temp;
		i++;
	}
}

// int main()
// {
//     int str[] =  {1,2,3,4,5,6,7,8,9};
//     int i = 0;
//     int n = 9;

//     ft_rev_int_tab(str, n);

//     while (i < n)
//     {
//         printf("%i", str[i]);
//         i++;
//     }
//     return(0);
// }