/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabpalma <pabpalma>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 15:43:16 by pabpalma          #+#    #+#             */
/*   Updated: 2023/06/20 16:20:36 by pabpalma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	size;
	int	*range;
	int	i;

	size = max - min;
	range = (int *)malloc(sizeof(int) * size);
	i = 0;
	if (size <= 0)
		return (0);
	while (i < size)
	{
		range[i] = min;
		i++;
		min++;
	}
	return (range);
}

int	main(void)
{
	int	min;
	int	max;
	int	i;
	int	*range;

	min = 5;
	max = 10;
	range = ft_range(min, max);
	i = 0;
	if (range != NULL)
	{
		while (i < (max - min))
		{
			printf("%d", range[i]);
			i++;
		}
		printf("\n");
		free (range);
	}
	else
		printf("Error");
	return (0);
}
