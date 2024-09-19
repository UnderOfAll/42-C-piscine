/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karocha- <karocha-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 12:08:02 by karocha-          #+#    #+#             */
/*   Updated: 2024/02/15 15:20:17 by karocha-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <unistd.h>

struct s_stock_str	ft_strs_to_tab(int ac, char **av);

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

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

void	ft_show_tab(struct s_stock_str *par)
{
	int	contador;

	contador = 0;
	while (par[contador].str)
	{
		ft_putstr(par[contador.str]);
		write(1, "\n", 1);
		ft_putnbr(par[contador.size]);
		write(1, "\n", 1);
		ft_putstr(par[contador.copy]);
		write(1, "\n", 1);
		contador++;
	}
}

/*int	main(int argc, char **argv)
{
	ft_show_tab(ft_strs_to_tab(argc, argv));
}*/