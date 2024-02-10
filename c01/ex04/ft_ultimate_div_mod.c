/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karocha- <karocha-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 17:51:43 by karocha-          #+#    #+#             */
/*   Updated: 2024/02/02 11:34:59 by karocha-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	divisao;
	int	resto;

	if (*b != 0)
	{
		divisao = *a / *b;
		resto = *a % *b;
		*a = divisao;
		*b = resto;
	}
}
