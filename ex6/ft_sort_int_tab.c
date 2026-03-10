/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eruffin <eruffin@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 19:23:23 by eruffin           #+#    #+#             */
/*   Updated: 2026/03/10 22:38:14 by eruffin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	tmp;

	i = 0;
	while (i < size - 1)
	{
		if (tab[i] <= tab[i + 1])
			i++;
		else
		{
			tmp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = tmp;
			i = 0;
		}
	}
}
/*
#include <stdio.h>
int	main(void)
{
	int	size = 5;
	//int	tab[] = {3, 4, 9, 6, 7, 1, 5, 2, 0, 8};
	int	tab[] = {72, 97, 8, 32, 15};

	ft_sort_int_tab(tab, 5);
	for (int i = 0; i < size; i++)
		printf("%d", tab[i]);
}
*/
