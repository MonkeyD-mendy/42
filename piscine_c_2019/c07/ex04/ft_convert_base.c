/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmendy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 08:45:14 by rmendy            #+#    #+#             */
/*   Updated: 2019/09/14 19:27:08 by rmendy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		ft_lendiff(char c, char *str2);
int		ft_nblenght(int number, char *base);
int		display(int nb, char *str, char *result, int index);

int		ft_atoi_base(char *str, char *str2)
{
	int	a;
	int	b;
	int	c;
	int	neg;
	int	base;

	base = 0;
	while (str2[base])
		++base;
	a = 0;
	while (str[a] && (str[a] == ' ' || str[a] == '\t' || str[a] == '\v'
			|| str[a] == '\n' || str[a] == '\f' || str[a] == '\r'))
		a++;
	b = a - 1;
	c = 0;
	neg = 1;
	while (str[++b] && (((str[b] == '-' || str[b] == '+') && b == a) ||
				(str[b] != '-' && str[b] != '+')))
		if (str[b] == '-')
			neg = -1;
		else if (str[b] == '+')
			c = (c * base) + (ft_lendiff(str[b], str2));
	return (c * neg);
}

int		length(int luffy, char *ace)
{
	int	c;
	int	d;

	d = 0;
	while (ace[d])
		d++;
	c = 0;
	while (luffy >= d)
	{
		++c;
		luffy /= d;
	}
	return (++c);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char	*str;
	int		a;
	int		b;

	b = 0;
	if (!nbr || !base_from || !base_to)
		return (0);
	a = ft_atoi_base(nbr, base_from);
	str = malloc(sizeof(char) * length(a, base_to));
	b = display(b, base_to, str, ft_nblenght(a, base_to));
	str[b + 1] = '\0';
	return (str);
}
