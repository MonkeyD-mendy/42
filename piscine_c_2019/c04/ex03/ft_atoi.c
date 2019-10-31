/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmendy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 07:27:38 by rmendy            #+#    #+#             */
/*   Updated: 2019/09/04 10:02:18 by rmendy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_luffy(char c)
{
	if (c == '\n' || c == '\t' || c == '\v' || c == '\r'
			|| c == '\f' || c == ' ')
		return (1);
	return (0);
}

int		ft_atoi(char *str)
{
	int	i;
	int	n;
	int	nb;
	int	co;

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
