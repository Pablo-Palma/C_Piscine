/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabpalma <pabpalma@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 18:16:18 by pabpalma          #+#    #+#             */
/*   Updated: 2023/06/15 15:00:52 by pabpalma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int	ft_atoi(char *str)
{
	int	i;
	int sign;
	int num;

	i = 0;
	sign = 1;
	num = 0;

	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-')
		{
			sign = -1;
			i++;
		}
	while (str[i] != '\0' && str[i] >= '0' && str[i]  <= '9')
	{
		num = num * 10 + (str[i] - '0');
		i++;
	}
	return (num * sign);
}

int	main(void)
{
	char str[] = "--+-2147483648";

	printf("%d\n", ft_atoi(str));
	printf("%d\n", atoi(str));
}
