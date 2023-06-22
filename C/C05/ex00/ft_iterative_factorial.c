/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabpalma <pabpalma>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 14:02:19 by pabpalma          #+#    #+#             */
/*   Updated: 2023/06/18 14:18:19 by pabpalma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int		i;
	int		result;

	i = 1;
	result = 1;
	if (nb < 0 || nb >= 13)
		return (0);
	while (i <= nb)
	{
		result *= i;
		i++;
	}
	return (result);
}

/*int	main(void)
{
	printf("%d\n", ft_iterative_factorial(0));
	return (0);
}*/
