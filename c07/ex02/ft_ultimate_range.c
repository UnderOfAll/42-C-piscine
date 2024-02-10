/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karocha- <karocha-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 12:09:40 by karocha-          #+#    #+#             */
/*   Updated: 2024/02/10 14:19:37 by karocha-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*d;
	int	size;

	i = 0;
	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	size = max - min;
	d = (int *)malloc((max - min) * sizeof(int));
	if (d == NULL)
	{
		*range = 0;
		return (-1);
	}
	*range = d;
	while (min < max)
	{
		d[i] = min;
		i++;
		min++;
	}
	return (size);
}

/*int main()
{
	int	min = 5;
	int	max = 10;
	int	*tab;
	int	size = ft_ultimate_range(&tab, min, max);
	int	i = 0;
	while (i < size)
	{
		printf("%d, ", tab[i]);
		i++;
	}
	free;
}*/