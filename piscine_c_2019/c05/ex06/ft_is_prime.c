/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmendy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 21:54:01 by rmendy            #+#    #+#             */
/*   Updated: 2019/09/10 04:17:14 by rmendy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	int	a;

	a = 2;
	if (nb == 1 || nb == 0)
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