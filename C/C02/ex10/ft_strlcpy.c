/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabpalma <pabpalma@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 18:41:24 by pabpalma          #+#    #+#             */
/*   Updated: 2023/06/12 22:56:01 by pabpalma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	src_len;

	i = 0;
	src_len = 0;
	while (src[src_len] != '\0')
		src_len++;
	if (size != 0)
	{
		while (src[i] != '\0' && i < size - 1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (src_len);
}

int	main(void)
{
	char dest[] = "0123";
	char src[] = "Pablo";
	unsigned int size;
	unsigned int len;

	size = 0;
	len = ft_strlcpy(dest, src, size);
	printf("dest string: %s\n", dest);
	printf("%d\n", len);
	printf("%zu\n",strlcpy(dest, src, 3));
	return (0);
}
