/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eruffin <eruffin@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 19:00:09 by eruffin           #+#    #+#             */
/*   Updated: 2026/03/10 19:08:09 by eruffin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}
/*
#include <stdio.h>
int	main(void)
{
	int	a = 15;
	int	b = 10;
	int	*aptr;
	int	*bptr;

	aptr = &a;
	bptr = &b;
	ft_ultimate_div_mod(aptr, bptr);
	printf("15 / 10 -> div = %d / mod = %d", *aptr, *bptr);
}
*/
