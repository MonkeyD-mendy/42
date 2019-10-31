/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmendy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 04:56:09 by rmendy            #+#    #+#             */
/*   Updated: 2019/09/12 22:31:19 by rmendy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include <stdio.h>

unsigned int	ft_strlen(char *s)
{
	int	len;

	len = 0;
	while (*s++)
		len++;
	return (len);
}

unsigned int	get_len(int size, char **strs, char *sep)
{
	int	len;
	int	i;

	i = 0;
	len = (size - 1) * ft_strlen(sep);
	while (i < size)
		len += ft_strlen(strs[i++]);
	len++;
	return (len);
}

char			*ft_strcat(char *dest, char *src)
{
	char	*tmp;

	tmp = dest;
	while (*tmp)
		tmp++;
	while (*src)
		*tmp++ = *src++;
	*tmp = '\0';
	return (dest);
}

char			*ft_strjoin(int size, char **strs, char *sep)
{
	char	*res;
	int		i;

	i = -1;
	if (size == 0)
	{
		if (!(res = (char*)malloc(sizeof(char) * get_len(size, strs, sep))))
			return (NULL);
		*res = '\0';
	}
	else
	{
		if (!(res = (char*)malloc(sizeof(char) * get_len(size, strs, sep))))
			return (NULL);
		res[0] = '\0';
		while (++i < size)
		{
			res = ft_strcat(res, strs[i]);
			if (i == size - 1)
				res[get_len(size, strs, sep) - 1] = '\0';
			else
				res = ft_strcat(res, sep);
		}
	}
	return (res);
}
