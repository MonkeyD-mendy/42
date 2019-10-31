/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmendy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/01 02:30:57 by rmendy            #+#    #+#             */
/*   Updated: 2019/09/04 05:08:48 by rmendy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int	a;
	unsigned int	b;

	if (*to_find == 0)
		return (str);
	a = 0;
	while (str[a])
	{
		if (str[a] == to_find[0])
		{
			b = 1;
			while ((to_find[b]) && (str[a + b] == to_find[b]))
				++b;
			if (to_find[b] == '\0')
				return (&str[a]);
		}
		a++;
	}
	return (0);
}
