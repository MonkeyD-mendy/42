/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmendy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 04:43:09 by rmendy            #+#    #+#             */
/*   Updated: 2019/09/14 19:31:30 by rmendy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	*range = NULL;
	i = -1;
	if (min >= max)
		return (0);
	if ((*range = (int*)malloc(sizeof(int) * (max - min))) == NULL)
		return (0);
	while (++i < (max - min))
		(*range)[i] = i + min;
	return (i);
}
