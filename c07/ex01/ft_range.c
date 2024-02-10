/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karocha- <karocha-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                            +#+#+   +#+           */
/*   Created: 2024/02/06 16:59:37 by karocha-          #+#    #+#             */
/*   Updated: 2024/02/07 15:02:29 by karocha-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*d;
	int	i;

	i = 0;
	if (min >= max)
		return (0);
	d = (int *)malloc((max - min) * sizeof(int));
	if (d == NULL)
		return (NULL);
	while (min < max)
	{
		d[i] = min;
		i++;
		min++;
	}
	return (d);
}

/*int main()
{
	int	min = 5;
	int	max = 10;
	int	size = max - min;
	int	i = 0;
	int	*tab = ft_range(min, max);
	while (i < size)
	{
		printf("%d, ", tab[i]);
		i++;
	}
}*/