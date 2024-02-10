/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karocha- <karocha-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 13:26:23 by karocha-          #+#    #+#             */
/*   Updated: 2024/02/03 17:24:08 by karocha-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	int	contador;

	contador = 1;
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	while (contador <= nb / 10)
	{
		contador *= 10;
	}
	while (contador > 0)
	{
		ft_putchar(nb / contador + '0');
		nb %= contador;
		contador /= 10;
	}
}
/*int	main()
{
	ft_putnbr(-2147483648);
	return(0);
}*/