#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
		
	}
	return (dest);
}

int	main(void)
{
	char src[] = "PabloPalma";
	char dest[] = "4242424242";
	unsigned int n = 5;

	ft_strncpy(dest, src, n);
	printf("%s\n", dest);
	return (0);
}
