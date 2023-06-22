/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabpalma <pabpalma@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 16:29:08 by pabpalma          #+#    #+#             */
/*   Updated: 2023/06/12 23:41:21 by pabpalma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	int				result;

	i = 0;
	while ((s1[i] != '\0') && (s2[i] != '\0') && (i < n))
	{
		if (s1[i] == s2[i])
		{
			i++;
		}
		else
		{
			return (s1[i] - s2[i]);
		}
	}
	if (i == n)
	{
		return (0);
	}
	result = (s1[i] - s2[i]);
	return (result);
}

/*int main(void)
{
    char *s1 = "abcadef";
    char *s2 = "abcad";
    unsigned int n = 6;

    printf("%d\n", ft_strncmp(s1, s2, n));
	printf("%d\n", strncmp(s1, s2, n));
    return 0;
}
*/
