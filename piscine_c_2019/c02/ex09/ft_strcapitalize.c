/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmendy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/02 02:00:01 by rmendy            #+#    #+#             */
/*   Updated: 2019/09/02 14:31:02 by rmendy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	a;
	int	b;

	a = 0;
	b = 1;
	while (str[a] != '\0')
	{
		if ((str[a] >= '0' && str[a] <= '9') || (str[a] >= 'a' && str[a] <= 'z')
				|| (str[a] >= 'A' && str[a] <= 'Z'))
		{
			if (b && (str[a] >= 'a' && str[a] <= 'z'))
				str[a] = str[a] - 32;
			else if (!b && (str[a] >= 'A' && str[a] <= 'Z'))
				str[a] = str[a] + 32;
			b = 0;
		}
		else
			b = 1;
		a++;
	}
	return (str);
}
