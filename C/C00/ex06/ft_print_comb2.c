/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabpalma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 17:20:00 by pabpalma          #+#    #+#             */
/*   Updated: 2023/06/04 21:49:10 by pabpalma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_print_init(int num)
{
	int	dec;
	int	uni;

	dec = num / 10 + '0';
	uni = num % 10 + '0';
	write(1, &dec, 1);
	write(1, &uni, 1);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_print_init(a);
			write(1, " ", 1);
			ft_print_init(b);
			if (!(a == 98 && b == 99))
				write (1, ", ", 2);
				b++;
		}
			a++;
	}
}

int	main(void)
{
	ft_print_comb2();
	return (0);
}
