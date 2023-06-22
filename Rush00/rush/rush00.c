/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabpalma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 14:48:29 by pabpalma          #+#    #+#             */
/*   Updated: 2023/06/03 18:38:40 by pabpalma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_matriz(int cols, int fila, int c, int f)
{
	if ((f == 0 && c == 0) || (c == cols && f == 0)
		|| (f == fila && c == 0) || (f == fila && c == cols))
		write (1, "o", 1);
	else if (f == 0 || f == fila)
		write(1, "-", 1);
	else if (c == 0 || c == cols)
		write(1, "|", 1);
	else
		write(1, " ", 1);
}

void	ft_rush(int cols, int fila)
{
	int	c;
	int	f;

	cols = cols -1;
	fila = fila -1;
	f = 0;
	while (f <= fila)
	{
		c = 0;
		while (c <= cols)
		{
			ft_matriz(cols, fila, c, f);
			c++;
		}
		write(1, "\n", 1);
		f++;
	}
}

int	main(void)
{
	ft_rush(1000, 1000);
	return (0);
}
