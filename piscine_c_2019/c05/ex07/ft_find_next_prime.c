/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmendy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 21:56:50 by rmendy            #+#    #+#             */
/*   Updated: 2019/09/10 05:06:32 by rmendy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		ft_is_prime(int nb)
{
	int	a;

	a = 2;
	if (nb <= 1)
		return (0);
	while (nb % a != 0)
	{
		if (a > nb)
			return (0);
		a++;
	}
	if (nb == a)
		return (1);
	else
		return (0);
}

int		ft_find_next_prime(int nb)
{
	int	a;

	a = 2;
	if (nb < 2)
		nb = 2;
	a = nb;
	while (a <= 2147483647)
	{
		if (ft_is_prime(a))
			return (a);
		a++;
	}
	return (0);
}
