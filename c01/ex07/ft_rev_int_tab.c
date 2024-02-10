/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karocha- <karocha-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 11:44:45 by karocha-          #+#    #+#             */
/*   Updated: 2024/01/28 17:16:27 by karocha-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	aux[10000];
	int	i;
	int	c;

	i = 0;
	c = size - 1;
	while (i != size)
	{
		aux[i] = tab[i];
		i++;
	}
	i = 0;
	while (c >= 0)
	{
		tab[i] = aux[c];
		c--;
		i++;
	}
}
/*12345
12345


aux[5] = 5
tab[0] = 1
tab[0] = aux[5]
tab[0] = 5
tab[1] = 2
aux[4] = 4
tab[1] = aux[4]
tab[1] = 4*/
