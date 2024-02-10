/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karocha- <karocha-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 17:44:26 by karocha-          #+#    #+#             */
/*   Updated: 2024/01/28 17:18:47 by karocha-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*#include <stdio.h>*/

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}

/*int		main(void)
{
	int a  = 5;
	int b  = 2;
	int *div = &a;
	int *mod = &b;

	ft_div_mod(a, b, div, mod);
	
	printf("Value of a is : %d",*div);
	printf("\nValue of b is : %d",*mod);
}*/