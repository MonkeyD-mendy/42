/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmendy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 11:50:42 by rmendy            #+#    #+#             */
/*   Updated: 2019/09/13 02:58:30 by rmendy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_lendiff(char c, char *str2)
{
	int	i;

	i = 0;
	while (str2[i] && str2[i] != c)
		i++;
	return (i);
}

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
