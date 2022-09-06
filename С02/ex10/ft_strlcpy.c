/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboiko <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 14:56:59 by mboiko            #+#    #+#             */
/*   Updated: 2022/07/11 14:57:01 by mboiko           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)

{
	unsigned int	a;

	a = 0;
	size -= 1;
	while (src[a] != '\0' && a < size)
	{
		dest[a] = src[a];
		a++;
	}
	while (a < size)
	{
		dest[a] = '\0';
		a++;
	}
	return (a);
}
