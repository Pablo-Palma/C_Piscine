/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabpalma <pabpalma@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 16:07:59 by pabpalma          #+#    #+#             */
/*   Updated: 2023/06/22 16:35:23 by pabpalma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(int nb)
{
	int	len;

	len = 0;
	if (nb <= 0)
		len = 1;
	while (nb != 0)
	{
		nb = nb / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int nbr)
{
	int	len;
	int	sign;
	char	*str;

	sign = 1;
	len = ft_strlen(nbr);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (nbr == -2147483648)
		return ("-2147483648\0");
	if (nbr < 0)
		sign = -1;
	if (str == 0)
		return (0);
	str[len] = '\0';
	len -=1;
	nbr *= sign;
	while (len >= 0)
	{
		str[len] = nbr % 10 + '0';
		nbr = nbr / 10;
		len--;
	}
	if (sign == -1)
		str[0] = '-';
	return (str);
}

int	main(void)
{
	printf("%s\n", ft_itoa (-2147483648));
	return (0);
}
