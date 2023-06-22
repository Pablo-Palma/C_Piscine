/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabpalma <pabpalma@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 18:25:09 by pabpalma          #+#    #+#             */
/*   Updated: 2023/06/07 19:11:22 by pabpalma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*int	main(void)
{
	char src[] = "Pablo";
	char dest[] = "Palma";

	printf("la cadena de src es: %s\n", src);
	printf("la cadena de destino es: %s\n", dest);
	ft_strcpy(dest, src);
	printf("despues de la funcion:\n");
	printf("la cadena de src es: %s\n", src);
	printf("la cadena de destino es: %s\n", dest);
	return (0);
}*/
