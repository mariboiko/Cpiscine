/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboiko <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 10:48:47 by mboiko            #+#    #+#             */
/*   Updated: 2022/07/12 10:48:50 by mboiko           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	a;
	int	b;

	a = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[a])
	{
		b = 0;
		if (str[a] == to_find[b])
		{
			while (str[a + b] == to_find[b])
			{
				b++;
				if (!to_find[b])
					return (&str[a]);
			}
		}
		a++;
	}
	return (0);
}
