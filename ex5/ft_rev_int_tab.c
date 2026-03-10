/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eruffin <eruffin@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 19:09:12 by eruffin           #+#    #+#             */
/*   Updated: 2026/03/10 19:22:18 by eruffin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	*head;
	int	*tail;
	int	tmp;

	head = tab;
	tail = tab + size - 1;
	while (head < tail)
	{
		tmp = *tail;
		*tail = *head;
		*head = tmp;
		head++;
		tail--;
	}
}
/*
#include <stdio.h>
int	main(void)
{
	int	size = 10;
	int	tab[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

	ft_rev_int_tab(tab, 10);
	for (int i = 0; i < size; i++)
		printf("%d", tab[i]);
}
*/
