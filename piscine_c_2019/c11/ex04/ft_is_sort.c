/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmendy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 14:40:54 by rmendy            #+#    #+#             */
/*   Updated: 2019/09/18 23:48:45 by rmendy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_sort(int *tab, int length, int (*f) (int, int))
{
	int		i;
	long	tmp;
	long	t;

	if (length < 2)
		return (1);
	i = 0;
	tmp = f(tab[i], tab[i + 1]);
	t = 0;
	while (i < length - 1)
	{
		t = f(tab[i], tab[i + 1]);
		if (tmp == 0)
			tmp = t;
		if (tmp * t < 0)
			return (0);
		i++;
	}
	return (1);
}
