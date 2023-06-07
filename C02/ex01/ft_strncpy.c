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
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

int	main(void)
{
	char src[] = "Pablo";
	char dest[] = "4242424242";
	unsigned int n = 10;

	ft_strncpy(dest, src, n);
	printf("%s\n", dest);
	return (0);
}
