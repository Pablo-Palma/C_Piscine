/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabpalma <pabpalma@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 22:33:38 by pabpalma          #+#    #+#             */
/*   Updated: 2023/06/19 15:53:12 by pabpalma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	d_size;

	i = 0;
	d_size = 0;
	while (dest[d_size])
	{
		d_size++;
	}
	while (src[i])
	{
		dest[d_size + i] = src[i];
		i++;
	}
	dest[d_size + i] = '\0';
	return (dest);
}

int	main(void)
{
	char	src[] = "hola";
	char	dest[] = "adios";

	printf("%s\n", ft_strcat(dest, src));
	return (0);
}
