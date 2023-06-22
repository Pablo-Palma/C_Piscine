/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabpalma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 18:18:38 by pabpalma          #+#    #+#             */
/*   Updated: 2023/06/04 00:32:09 by pabpalma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_matriz(int x, int y, int c, int f)
{	
	if ((f == 0 && c == 0) || (c == x && f == 0)
		|| (f == y && c == 0) || (f == y && c == x))
		ft_putchar('o');
	else if (f == 0 || f == y)
		ft_putchar('-');
	else if (c == 0 || c == x)
		ft_putchar('|');
	else
		ft_putchar(' ');
}

void	rush(int x, int y)
{
	int	c;
	int	f;

	if ((x <= 0 || y <= 0) || (x > 2147483647 || y > 2147483647))
	{
		write(1, "Error: Los Parámetros deben ser enteros positivos", 50);
		return ;
	}
	x = x - 1;
	y = y - 1;
	f = 0;
	while (f <= y)
	{
		c = 0;
		while (c <= x)
		{
			ft_matriz(x, y, c, f);
			c++;
		}
		write(1, "\n", 1);
		f++;
	}
}
