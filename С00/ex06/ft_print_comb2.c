/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboiko <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 10:08:00 by mboiko            #+#    #+#             */
/*   Updated: 2022/07/04 10:10:30 by mboiko           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = 1;
		while (b <= 99)
		{
			if (a < b)
			{
				ft_putchar (a / 10 + '0');
				ft_putchar (a % 10 + '0');
				write (1, " ", 1);
				ft_putchar (b / 10 + '0');
				ft_putchar (b % 10 + '0');
				if (!(a == 98 & b == 99))
				{
					write (1, ", ", 2);
				}
			}
				b++;
		}
		a++;
	}
}
