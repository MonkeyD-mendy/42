/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmendy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 19:15:23 by rmendy            #+#    #+#             */
/*   Updated: 2019/09/17 20:40:05 by rmendy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_is_charset(char *str, char to_find)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == to_find)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strcpy(char *dest, char *src, int start, int stop)
{
	int	i;

	i = 0;
	while (start + i < stop)
	{
		dest[i] = src[start + i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int		ft_size(char *str, char *charset)
{
	int i;
	int size_tab;

	i = 0;
	size_tab = 0;
	while (str[i])
	{
		if (!ft_is_charset(charset, str[i]))
			size_tab++;
		while (!ft_is_charset(charset, str[i]) && str[i])
			i++;
		while (ft_is_charset(charset, str[i]) && str[i])
			i++;
	}
	return (size_tab);
}

char	**ft_init_tab(int size)
{
	char **tab;

	if (!(tab = malloc(sizeof(char *) * (size + 1))))
		return (NULL);
	tab[size] = NULL;
	return (tab);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		k;
	int		len;
	char	**tab;

	i = 0;
	k = 0;
	tab = ft_init_tab(ft_size(str, charset));
	while (str[i])
	{
		len = 0;
		while (!ft_is_charset(charset, str[i + len]) && str[i + len])
			len++;
		if (len)
		{
			if (!(tab[k] = (char*)malloc(sizeof(char) * (len + 1))))
				return (NULL);
			tab[k] = ft_strcpy(tab[k], str, i, i + len);
			k++;
		}
		while (ft_is_charset(charset, str[i + len]))
			i++;
		i = i + len;
	}
	return (tab);
}