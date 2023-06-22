/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prueba.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabpalma <pabpalma@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 19:25:49 by pabpalma          #+#    #+#             */
/*   Updated: 2023/06/12 17:56:13 by pabpalma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	c;

	i = 0;
	c = 0;
	while (str[c] != '\0')
	{
		if (((str[c] >= 'a') && (str[c] <= 'z')) && (i == 0))
		{
			str[c] -= (32);
			i++;
		}
		else if (((str[c] >= 'A') && (str[c] <= 'Z')) && (i > 0))
		{
			str[c] += (32);
		}
		else if (((str[c] < '0') || (str[c] > '9')) && ((str[c] < 'A')
				|| (str[c] > 'Z')) && ((str[c] < 'a') || (str[c] > 'z')))
				i = 0;
		else
			i++;
		c++;
	}
	return (str);
}

/**int	main(void)
{
	char str[] = "salut, stás comment tu vas ? 42mots quarante-deux; cinnte+et+un";

	printf("%s\n",ft_strcapitalize(str));
	return (0);
}*/
