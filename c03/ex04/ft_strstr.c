/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karocha- <karocha-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 18:09:16 by karocha-          #+#    #+#             */
/*   Updated: 2024/01/31 13:20:55 by karocha-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	c;

	i = 0;
	c = 0;
	if (to_find[c] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		while (str[i + c] == to_find[c] && str[i + c] != '\0')
			c++;
		if (to_find[c] == '\0')
			return (str + i);
		i++;
		c = 0;
	}
	return (0);
}
/*int main()
{
	char str[] = "42 piscine january 2024";
	char to_find[] = "piscine";
	printf("%s", ft_strstr(str, to_find));
}*/