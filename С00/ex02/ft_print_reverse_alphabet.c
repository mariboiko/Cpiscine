/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboiko <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 09:36:07 by mboiko            #+#    #+#             */
/*   Updated: 2022/07/03 09:36:28 by mboiko           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char b)
{
	write(1, &b, 1);
}

void	ft_print_reverse_alphabet(void)
{
	char	b;

	b = 'z';
	while (b >= 'a')
	{
		ft_putchar(b);
		b--;
	}
}
