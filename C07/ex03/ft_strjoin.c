/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabpalma <pabpalma>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 18:08:14 by pabpalma          #+#    #+#             */
/*   Updated: 2023/06/21 09:47:57 by pabpalma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str++)
		i++;
	return (i);
}

char	*ft_strcpycat(char *dest, char *src, int append)
{
	int	i;
	int	destlen;

	if (append != 0)
		destlen = ft_strlen(dest);
	else
		destlen = 0;
	i = 0;
	while (src[i] != '\0')
	{
		dest[i + destlen] = src[i];
		i++;
	}
	dest[i + destlen] = '\0';
	return (dest);
}

int	calc_total_len(int size, char **strs, char *sep)
{
	int	total_len;
	int	i;

	total_len = 0;
	i = 0;
	while (i < size)
	{
		total_len += ft_strlen(strs[i]);
		i++;
	}
	total_len += ft_strlen(sep) * (size - 1) + 1;
	return (total_len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*str;
	int		total_len;

	total_len = calc_total_len(size, strs, sep);
	str = (char *)malloc(total_len * sizeof(char));
	if (str == 0)
		return (NULL);
	str[0] = '\0';
	i = 0;
	while (i < size)
	{
		if (i == 0)
		{
			ft_strcpycat(str, strs[i], 0);
		}
		else
		{
			ft_strcpycat(str, sep, 1);
			ft_strcpycat(str, strs[i], 1);
		}
		i++;
	}
	return (str);
}
/*
int	main(void)
{
	char *strs[] = {"pablo", "palma"};
	char *sep = " ";
	char *result = ft_strjoin(2, strs, sep);
	int	i;

	i = 0;
	if (result[i] != '\0')
	{
		while (result[i] != '\0')
		{
			putchar(result[i]);
			i++;
		}
		putchar('\n');
		free(result);
	}
	return (0);
}*/
