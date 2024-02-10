/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karocha- <karocha-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 10:45:59 by karocha-          #+#    #+#             */
/*   Updated: 2024/02/03 17:31:41 by karocha-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	check_errors(char *str)
{
	int	i;
	int	c;
	int	size;

	i = 0;
	size = ft_strlen(str);
	if (size == 1 || str[i] == '\0')
		return (0);
	while (str[i] != '\0')
	{
		if (str[i] == '-' || str[i] == '+' || str[i] >= 126 || str[i] <= 32)
			return (0);
		c = i + 1;
		while (c < size)
		{
			if (str[i] == str[c])
				return (0);
			c++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long	nb;
	int		errors;
	int		size;

	errors = check_errors(base);
	size = ft_strlen(base);
	nb = nbr;
	if (errors == 1)
	{
		if (nb < 0)
		{
			ft_putchar('-');
			nb *= -1;
		}
		if (nb < size)
			ft_putchar(base[nb]);
		if (nb >= size)
		{
			ft_putnbr_base(nb / size, base);
			ft_putnbr_base(nb % size, base);
		}
	}
}

/*int main()
{
	ft_putnbr_base(-12, "01");
	printf("\n");
	ft_putnbr_base(40, "poneyvif");
	printf("\n");
	ft_putnbr_base(898234, "0123456789");
	printf("\n");
	ft_putnbr_base(53, "0123456789abcdef");
}*/