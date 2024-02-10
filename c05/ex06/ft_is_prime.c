/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karocha- <karocha-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 15:02:20 by karocha-          #+#    #+#             */
/*   Updated: 2024/02/06 16:56:50 by karocha-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	prime;

	prime = 2;
	if (nb <= 1)
		return (0);
	while (prime <= (nb / 2))
	{
		if (!(nb % prime))
			return (0);
		else
			prime++;
	}
	return (1);
}
/*int main()
{
	printf("%d", ft_is_prime(13));
}*/