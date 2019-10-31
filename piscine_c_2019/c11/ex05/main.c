/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmendy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 02:21:14 by rmendy            #+#    #+#             */
/*   Updated: 2019/09/19 02:21:17 by rmendy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"
#include <stdlib.h>

int		ft_luffy(char c)
{
	if (c == '\n' || c == '\t' || c == '\v' || c == '\r'
			|| c == '\f' || c == ' ')
		return (1);
	return (0);
}

int		ft_atoi(char *str)
{
	int		i;
	int		n;
	int		nb;
	int		co;

	i = 0;
	n = 0;
	nb = 0;
	co = 0;
	while (ft_luffy(str[i]))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i++] == '-')
			co++;
	}
	while (str[i] >= 48 && str[i] <= 57)
		n = n * 10 + str[i++] - 48;
	if (co % 2 == 0)
		nb = 1;
	else
		nb = -1;
	return (n * nb);
}

int		ft_strcmp(char *s1, char *s2)
{
	int	a;

	a = 0;
	while (s1[a] == s2[a] && s1[a] && s2[a])
		a++;
	return (s1[a] - s2[a]);
}

void	ft_putstr(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
		write(1, &str[i], 1);
}

int		main(int ac, char **av)
{
	if (ac != 4)
		return (0);
	if (!ft_strcmp(av[2], "+"))
		ft_putnbr(ft_atoi(av[1]) + ft_atoi(av[3]));
	else if (!ft_strcmp(av[2], "-"))
		ft_putnbr(ft_atoi(av[1]) - ft_atoi(av[3]));
	else if (!ft_strcmp(av[2], "*"))
		ft_putnbr(ft_atoi(av[1]) * ft_atoi(av[3]));
	else if (!ft_strcmp(av[2], "/"))
		if (!ft_atoi(av[3]))
			ft_putstr("Stop : division by zero\n");
		else
			ft_putnbr(ft_atoi(av[1]) / ft_atoi(av[3]));
	else if (!ft_strcmp(av[2], "%"))
		if (!ft_atoi(av[3]))
			ft_putstr("Stop : modulo by zero\n");
		else
			ft_putnbr(ft_atoi(av[1]) % ft_atoi(av[3]));
	else
		ft_putstr("0");
	ft_putstr("\n");
	return (1);
}
