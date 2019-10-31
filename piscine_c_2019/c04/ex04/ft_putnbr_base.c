/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmendy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 00:41:17 by rmendy            #+#    #+#             */
/*   Updated: 2019/09/04 07:25:26 by rmendy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	ft_base(char *base)
{
	int a;
	int b;

	a = 0;
	b = 0;
	while (base[a])
	{
		if (base[a] == '+' || base[a] == '-')
			return (0);
		b = a + 1;
		while (base[b])
		{
			if (base[a] == base[b])
				return (0);
			b++;
		}
		a++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int l;
	int o;

	l = 0;
	o = 0;
	while (base[l])
		l++;
	if (l <= 1 || !ft_base(base))
		return ;
	if (nbr < 0)
	{
		ft_putchar('-');
		if (nbr == -2147483648)
		{
			nbr = 2147483647;
			o = 1;
		}
		else
			nbr = -nbr;
	}
	if (nbr >= l)
		ft_putnbr_base(nbr / l, base);
	ft_putchar(base[nbr % l + o]);
}
