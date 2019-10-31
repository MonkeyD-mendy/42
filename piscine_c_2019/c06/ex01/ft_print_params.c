/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmendy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 20:45:50 by rmendy            #+#    #+#             */
/*   Updated: 2019/09/06 22:57:02 by rmendy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	a;

	a = -1;
	while (str[++a])
		write(1, &str[a], 1);
}

int		main(int ac, char **av)
{
	int	a;

	a = 1;
	while (a < ac)
	{
		ft_putstr(av[a]);
		write(1, "\n", 1);
		a++;
	}
	return (0);
}
