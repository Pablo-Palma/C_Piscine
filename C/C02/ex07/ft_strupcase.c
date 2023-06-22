/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabpalma <pabpalma@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 18:33:09 by pabpalma          #+#    #+#             */
/*   Updated: 2023/06/07 18:35:00 by pabpalma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] > 96 && str[i] < 123)
			str[i] -= 32;
		else
			i++;
	}
	return (str);
}

/*int	main(void)
{
	char str[] = "PaBlO";
	
	ft_strupcase(str);
	printf("%s\n", str);
	return (0);
}*/
