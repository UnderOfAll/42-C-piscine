/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karocha- <karocha-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 11:46:05 by karocha-          #+#    #+#             */
/*   Updated: 2024/02/15 12:07:37 by karocha-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*dest;

	i = 0;
	dest = malloc(sizeof(char) * ft_strlen(src) + 1);
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*stock;
	int			contador;

	contador = 0;
	stock = malloc(sizeof(t_stock_str) * (ac + 1));
	if (!stock)
		return (NULL);
	while (contador < ac)
	{
		stock[contador].size = ft_strlen(av[contador]);
		stock[contador].str = av[contador];
		stock[contador].copy = ft_strdup(av[contador]);
		contador++;
	}
	stock[contador].str = 0;
	return (stock);
}
/*#include <stdio.h>

int	main(int argc, char **argv)
{
	int					index;
	struct s_stock_str	*structs;

	structs = ft_strs_to_tab(argc, argv);
	index = 0;
	while (index < argc)
	{
		printf("%d\n", index);
		printf("\t| original : $%s$ @ %p\n", structs[index].str,
			structs[index].str);
		printf("\t|   copied : $%s$ @ %p\n", structs[index].copy,
			structs[index].copy);
		printf("\t|     size : %d\n", structs[index].size);
		index++;
	}
}*/
/*int	main(void)
{
	char *str[] = {"abc", "ab", "a", "dasdas", NULL};
	int size = 4;
	t_stock_str *test = ft_strs_to_tab(size, str);
	printf("%s", test[0].copy);
}*/