/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabpalma <pabpalma@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 14:18:48 by pabpalma          #+#    #+#             */
/*   Updated: 2023/06/14 17:36:49 by pabpalma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>
#include <stdio.h>
#include <limits.h>

void	ft_putchar(unsigned char nbr)
{
	write (1, &nbr, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else if (nb < 0)
	{
		ft_putchar('-');
		ft_putnbr((nb * -1));
	}
	else if (nb < 10)
		ft_putchar(nb % 10 + '0');
	else if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putchar(nb % 10 + '0');
	}
}

/*int	main(void)
{
	ft_putnbr(INT_MIN);
	write(1, "\n", 1);
	return (0);
}*/
