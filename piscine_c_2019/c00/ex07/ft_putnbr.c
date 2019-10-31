/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmendy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 16:27:15 by rmendy            #+#    #+#             */
/*   Updated: 2019/09/11 16:29:13 by rmendy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long a;

	a = nb;
	if (a < 0)
	{
		ft_putchar('-');
		a = a * -1;
	}
	if (a > 9)
	{
		ft_putnbr(a / 10);
		ft_putchar(a % 10 + 48);
	}
	if (a <= 9)
	{
		ft_putchar(a + 48);
	}
}
