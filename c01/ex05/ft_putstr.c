/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karocha- <karocha-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 11:29:55 by karocha-          #+#    #+#             */
/*   Updated: 2024/01/31 13:25:56 by karocha-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


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
