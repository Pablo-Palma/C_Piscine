/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prueba.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabpalma <pabpalma@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 13:41:35 by pabpalma          #+#    #+#             */
/*   Updated: 2023/06/10 19:13:33 by pabpalma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

int	char_to_num(char c)
{
	return (c - '0');
}

void	write_char(char c)
{
	write(1, &c, 1);
}

void	write_str(char *str)
{
	while (*str)
	{
		write_char(*str++);
	}
}

void	write_num(int num)
{
	char	c;

	c = '0' + num;
	write_char (c);
}

void	print_grid(int *grid, int size)
{
	int	fila;
	int	colum;

	fila = 0;
	while (fila < size)
	{
		colum = 0;
		while (colum < size)
		{
			write_num(grid[fila * size + colum]);
			if (colum < size -1)
				write_char(' ');
			colum++;
		}
		fila++;
		write_char('\n');
	}
}

int can_place (int *grid, int size, int row, int col, int num)
{
	int	i;

	i = 0;
	while (i < size)
	{
		if (grid[row * size + i] == num || grid[i * size + col] == num)
		{
			return 0;
		}
		i++;
	}
	return (1);
}

int	solve(int *grid, int size)
{
	int i;
	int j;
	int num;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			if (grid[i * size + j] == 0)
			{
				num = 1;
				while (num <= size)
				{
					if (can_place(grid, size, i, j, num))
					{
						grid[i * size + j] = num;
						if (solve(grid, size))
							return(1);
						else
							grid[i * size + j] = 0;
					}
					num++;
				}
			return (0);
			}
			j++;
		}
		i++;
	}
	return (1);
}

int	main(int argc, char **argv)
{
	int	size;
	int	*grid;
	int	counter;
	int *hints;
	int hint_index;


	hint_index = 0;
	counter = 0;
	size = 4;
	grid = malloc(size * size * sizeof(int)); //guardamos 64 bytes,16 por 4;
	hints = malloc(size * size * sizeof(int));
	if (argc != 2)
	{
		write_str("Error: Wrong number of arguments.\n");
		return (1);
	}
	while (counter < size * size)
	{
		grid[counter] = 0;
		counter++;
	}
	while (argv[1][counter] != '\0')
	{
		if (argv[1][counter] != ' ')
		{
			hints[hint_index] = char_to_num(argv[1][counter]);
			hint_index++;
		}
		counter++;
	}

	if (solve(grid, size))
	{
		print_grid(grid, size);
	}
	else
		write_str("No solution found.\n");

	free(grid);
	free(hints);

	return (0);
}
