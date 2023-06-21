/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabpalma <pabpalma>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 14:44:50 by pabpalma          #+#    #+#             */
/*   Updated: 2023/06/20 15:33:39 by pabpalma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int	ft_strlen(char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	int		srclen;
	int		size;
	char	*dup;

	i = 0;
	srclen = ft_strlen(src);
	size = (sizeof(char) * (srclen +1));
	dup = (char *)malloc(size);
	while (src[i] != 0)
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

/*int	main(void)
{
	char *src;
	char *dup;

	src = "Pablo";
	dup = ft_strdup(src);
	if (*dup != 0)
	{
		printf("%s\n", dup);
		free (dup);
	}
	return (0);
}*/
