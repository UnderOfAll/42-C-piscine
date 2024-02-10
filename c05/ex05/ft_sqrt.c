/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karocha- <karocha-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 13:56:29 by karocha-          #+#    #+#             */
/*   Updated: 2024/02/06 16:56:18 by karocha-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	long	n;
	long	nbr;

	nbr = 2;
	n = nb;
	if (n <= 0)
		return (0);
	if (n == 1)
		return (1);
	if (n >= 2)
	{
		while (nbr * nbr <= n)
		{
			if (nbr * nbr == n)
				return (nbr);
			nbr++;
		}
	}
	return (0);
}

/*int	main(void)
{
	printf("%d", ft_sqrt(169));
}*/