/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmendy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 05:34:17 by rmendy            #+#    #+#             */
/*   Updated: 2019/09/14 19:19:23 by rmendy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		display(int nb, char *str, char *result, int index)
{
	unsigned int	nbr;
	unsigned int	str_lenght;

	str_lenght = 0;
	while (str[str_lenght])
		str_lenght++;
	if (nb < 0)
	{
		result[index++] = '-';
		nbr = nb * -1;
	}
	else
		nbr = nb;
	if (nbr >= str_lenght)
		display(nbr / str_lenght, str, result, index - 1);
	result[index] = str[nbr % str_lenght];
	return (index);
}

int		ft_nblenght(int number, char *base)
{
	int	length;
	int	base_lenght;

	length = 0;
	base_lenght = 0;
	while (number >= base_lenght)
	{
		++length;
		number /= base_lenght;
	}
	return (++length);
}

int		ft_lendiff(char c, char *str2)
{
	int	i;

	i = 0;
	while (str2[i] && str2[i] != c)
		i++;
	return (i);
}
