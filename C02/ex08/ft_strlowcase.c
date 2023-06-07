#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] > 64 && str[i] < 91)
			str[i] += 32;
		i++;
	}
	return (str);
}

int	main(void)
{
	char str[] = "Pablo PalmA";

	ft_strlowcase(str);
	printf("%s\n", str);
	return (0);
}
