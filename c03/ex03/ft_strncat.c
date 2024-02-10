/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karocha- <karocha-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 16:25:16 by karocha-          #+#    #+#             */
/*   Updated: 2024/01/31 18:20:58 by karocha-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include <string.h>*/

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	c;

	i = 0;
	c = 0;
	while (dest[i])
		i++;
	while (src[c] && c < nb)
	{
		dest[i + c] = src[c];
		c++;
	}
	dest[i + c] = '\0';
	return (dest);
}

/*int main()
{       
        char dest[] = "Salve ";
        char dest2[20] = "Salve";
        char src[] = "rapaziada";
        printf("%s", ft_strncat(dest, src, 7));
        printf("\n%s", strncat(dest2, src, 20));
        return (0);
}*/