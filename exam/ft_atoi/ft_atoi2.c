/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabpalma <pabpalma@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 14:03:10 by pabpalma          #+#    #+#             */
/*   Updated: 2023/06/15 15:02:05 by pabpalma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(const char *str)
{
	int	i;
	int num;
	int sign;
	int result;

	i = 0;
	num = 0;
	sign = 1;
	result = 0;
	while (str[i] == 32 || (str[i] > 8 && str[i] < 14))
	{
		i++;
	}
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] != '\0' && (str[i] >= '0' && str[i] <= '9'))
	{
		num = num * 10 + str[i] - '0';
		i++;
	}
	result = num * sign;
	return (result);
}

int	main(int argc, char **argv)
{	
	if (argc < 2)
		return (0);
	printf("%d\n", ft_atoi(argv[1]));
	printf("%d\n", atoi(argv[1]));
	return (0);
}
