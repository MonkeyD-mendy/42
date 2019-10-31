/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmendy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 04:21:50 by rmendy            #+#    #+#             */
/*   Updated: 2019/09/12 22:28:01 by rmendy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int	*a;
	int	b;

	if (min >= max)
		return (NULL);
	if (max - min > 1)
		max--;
	b = -1;
	a = malloc(sizeof(int) * (max - min));
	while (++b <= (max - min))
		a[b] = b + min;
	return (a);
}
