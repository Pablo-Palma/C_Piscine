#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int src_len;

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

	size = 5;
	len = ft_strlcpy(dest, src, size);
	printf("dest string: %s\n", dest);
	printf("src length: %d\n", len);
	return (0);
}
