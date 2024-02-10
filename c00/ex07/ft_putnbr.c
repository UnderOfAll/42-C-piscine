/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karocha- <karocha-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 15:20:07 by karocha-          #+#    #+#             */
/*   Updated: 2024/01/25 17:34:07 by karocha-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
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

/*int main(){
    ft_putnbr(745);
    return(0);
}*/