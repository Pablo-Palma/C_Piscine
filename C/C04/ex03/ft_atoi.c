/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabpalma <pabpalma@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 16:48:09 by pabpalma          #+#    #+#             */
/*   Updated: 2023/06/15 16:04:57 by pabpalma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(char *str)
{
	int	i;
	int	c;
	int	sign;
	int	num;

	i = 0;
	c = 0;
	num = 0;
	sign = 1;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			c++;
		i++;
	}
	if (c % 2 != 0)
		sign = -1;
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
			num = num * 10 + (str[i] - '0');
			i++;
	}
	return (num * sign);
}

/*int	main(void)
{
	char str[] = "- 2147483a648";

	printf("%d\n", ft_atoi(str));
	printf("%d\n", atoi(str));
	return (0);
}*/
