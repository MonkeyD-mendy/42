/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmendy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 18:28:15 by rmendy            #+#    #+#             */
/*   Updated: 2019/09/18 23:46:38 by rmendy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

void	ft_sort_string_tab(char **tab)
{
	int		a;
	int		b;
	char	*c;

	b = 0;
	while (tab[b])
	{
		a = 0;
		while (tab[a])
		{
			if (ft_strcmp(tab[b], tab[a]) < 0)
			{
				c = tab[a];
				tab[a] = tab[b];
				tab[b] = c;
			}
			a++;
		}
		b++;
	}
}
