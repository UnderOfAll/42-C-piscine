/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karocha- <karocha-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 12:33:35 by karocha-          #+#    #+#             */
/*   Updated: 2024/01/27 14:46:57 by karocha-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*#include <stdio.h>*/

void	ft_sort_int_tab(int *tab, int size)
{
	int	swp;
	int	a;
	int	i;

	i = 0;
	while (i < size)
	{
		a = i + 1;
		while (a < size)
		{
			if (tab[i] > tab[a])
			{
				swp = tab[i];
				tab[i] = tab[a];
				tab[a] = swp;
			}
			a++;
		}
		i++;
	}
}

/*int main() {
    int tab[] = {5, 2, 9, 1, 40, 3};
    int size = sizeof(tab) / sizeof(tab[0]);

    printf("Original Array:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", tab[i]);
    }
    printf("\n");

    ft_sort_int_tab(tab, size);

    printf("Sorted Array:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", tab[i]);
    }
    printf("\n");

    return 0;
}*/