/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eruffin <eruffin@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 13:21:47 by eruffin           #+#    #+#             */
/*   Updated: 2026/03/10 13:26:04 by eruffin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
/*
#include <stdio.h>
int	main(void)
{
	int	*nbr1;
	int	*nbr2;
	int	val1 = 1;
	int	val2 = 2;

	nbr1 = &val1;
	nbr2 = &val2;
	ft_swap(nbr1, nbr2);
	printf("%d,%d", *nbr1, *nbr2);

}
*/
