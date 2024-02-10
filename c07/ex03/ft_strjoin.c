/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karocha- <karocha-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 13:45:12 by karocha-          #+#    #+#             */
/*   Updated: 2024/02/10 14:28:56 by karocha-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

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

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	c;

	i = 0;
	while (dest[i] != '\0')
		i++;
	c = 0;
	while (src[c] != '\0')
	{
		dest[i] = src[c];
		i++;
		c++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		total_len;
	char	*dest;
	int		pos_str;

	i = 0;
	total_len = 0;
	if (size == 0)
		return ((char *)malloc(sizeof(char)));
	dest = (char *)malloc(**strs * sizeof(char));
	while (i < size)
		total_len += ft_strlen(strs[i++]);
	// adiciona o tamanho total de todas as strings juntas
	total_len += ft_strlen(sep) * (size - 1);
	// adiciona o tamanho das separacoes de cada string menos a ultima
	dest = (char *)malloc((total_len + 1) * sizeof(char));
	i = 0;
	pos_str = 0;
	while (i < size)
	{
		ft_strcat(dest + pos_str, strs[i]);
		pos_str += ft_strlen(strs[i]);
		if (i < size - 1)
		{
			ft_strcat(dest + pos_str, sep);
			pos_str += ft_strlen(sep);
		}
		i++;
	}
	return (dest);
}

/*
 hello
friend
you are awesome
", "
hello, friend, you are awesome
agrv[argc - 1]*/