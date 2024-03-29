/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmendy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/29 08:29:49 by rmendy            #+#    #+#             */
/*   Updated: 2019/09/03 22:50:12 by rmendy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	a;

	a = 0;
	while (s1[a] && s2[a] && a < n)
	{
		if (s1[a] != s2[a])
		{
			return (s1[a] - s2[a]);
		}
		a++;
	}
	if (a < n && ((s1[a] == '\0' && s2[a] != '\0')
				|| (s2[a] == '\0' && s1[a] != '\0')))
	{
		return (s1[a] - s2[a]);
	}
	return (0);
}
