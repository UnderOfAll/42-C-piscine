/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karocha- <karocha-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 12:01:00 by karocha-          #+#    #+#             */
/*   Updated: 2024/02/07 18:56:21 by karocha-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;

	i = 0;
	while (s1[i] == s2[i] && (s1[i] != '\0' || s2[i] != '\0'))
		i++;
	return (s1[i] - s2[i]);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	ft_swap(char **s1, char **s2)
{
	char	*swp;

	swp = *s1;
	*s1 = *s2;
	*s2 = swp;
}

int	main(int argc, char **argv)
{
	int	p;
	int	c;

	p = 1;
	while (p < argc - 1)
	{
		c = 1;
		while (c < argc - 1)
		{
			if (ft_strcmp(argv[c], argv[c + 1]) > 0)
				ft_swap(&argv[c], &argv[c + 1]);
			c++;
		}
		p++;
	}
	c = 1;
	while (c < argc)
	{
		ft_putstr(argv[c]);
		write(1, "\n", 1);
		c++;
	}
	return (0);
}
