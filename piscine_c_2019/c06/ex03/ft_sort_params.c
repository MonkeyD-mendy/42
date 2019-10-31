/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmendy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 16:32:17 by rmendy            #+#    #+#             */
/*   Updated: 2019/09/11 16:32:31 by rmendy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, &"\n", 1);
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		i++;
	return (s1[i] - s2[i]);
}

int		main(int ac, char **av)
{
	int a;
	int b;
	int c;

	c = 0;
	while (c < ac - 1)
	{
		a = 1;
		b = 1;
		while (b < ac)
		{
			if (ft_strcmp(av[a], av[b]) > 0)
				a = b;
			b++;
		}
		ft_putstr(av[a]);
		av[a][0] = 127;
		c++;
	}
}
