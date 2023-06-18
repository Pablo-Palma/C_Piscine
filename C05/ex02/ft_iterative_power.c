/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabpalma <pabpalma>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 18:10:06 by pabpalma          #+#    #+#             */
/*   Updated: 2023/06/18 18:16:12 by pabpalma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = 1;
	if (nb == 0 || power == 0)
		return (1);
	else if (power < 0)
		return (0);
	else
	{
		while (power > 0)
		{
			result = nb * result;
			power--;
		}
	}
	return (result);
}

/*int	main(void)
{
	printf("%d\n", ft_iterative_power(10, 0));
	return (0);
}*/
