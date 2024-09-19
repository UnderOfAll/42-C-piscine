/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karocha- <karocha-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 13:45:12 by karocha-          #+#    #+#             */
/*   Updated: 2024/02/15 16:40:33 by karocha-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	total_len(int size, char **strs, int sep_len)
{
	int	total_lenght;
	int	i;

	total_lenght = 0;
	i = 0;
	while (i < size)
	{
		total_lenght += ft_strlen(strs[i]);
		if (i < size - 1)
			total_lenght += sep_len;
		i++;
	}
	return (total_lenght);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		x;
	char	*buffer;

	j = -1;
	x = -1;
	buffer = malloc((total_len(size, strs, ft_strlen(sep)) + 1) * sizeof(char));
	if (buffer == NULL)
		return (NULL);
	if (size == 0)
		return ((char *)malloc(sizeof(char)));
	while (++j < size)
	{
		i = 0;
		while (strs[j][i])
			buffer[++x] = strs[j][i++];
		i = 0;
		while (sep[i] && j != size - 1)
			buffer[++x] = sep[i++];
	}
	buffer[++x] = '\0';
	return (buffer);
}

/* int main()
{
	int size = 3;
	char *sep = " | ";
	char *strs[size];
	char *result;

	strs[0] = "Hello";
	strs[1] = "This is a";
	strs[2] = "Test";
	strs[3] = "This message shouldn't appear";

	result = ft_strjoin(size, strs, sep);

	printf("%s\n", result);
	free(result);
} */