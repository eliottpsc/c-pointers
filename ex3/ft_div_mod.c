/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eruffin <eruffin@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 14:21:16 by eruffin           #+#    #+#             */
/*   Updated: 2026/03/10 18:36:05 by eruffin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
#include <stdio.h>
int	main(void)
{
	int	a = 15;
	int	b = 10;
	int	*aptr;
	int	*bptr;
	// *div = a/b;
	// *mod = a%b;
	aptr = &a;
	bptr = &b;
	ft_div_mod(a, b, aptr, bptr);
	printf("15 / 10 -> div = %d / mod = %d", *aptr, *bptr);
}
*/
