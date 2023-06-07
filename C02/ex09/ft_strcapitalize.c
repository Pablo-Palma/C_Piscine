#include <stdio.h>

char *ft_strcapitalize(char *str)
{
	int	i;
	int newWord;

	i = 0;
	newWord = 1;

	while (str[i])
	{
		if ((str[i] > 64 && str[i] < 91) || (str[i] > 96 && str[i] < 123))
		{
			if (newWord)
			{
				str[i] = str[i] > 97 && str[i] < 123 ? str[i] -= 32 : str[i];
				newWord = 0;
			}
			else 
				str[i] = str[i] > 64 && str[i] < 91 ? str[i] += 32 : str[i];
		}
		else if (str[i] > 49 && str[i] < 57)
			newWord = 0;
		else
			newWord = 1;
		i++;
	}
	return (str);
}

int	main(void)
{
	char str[] = "salut, comment tu vas ? 42mots quarante-deux; cinnte+et+un";

	printf("%s\n", ft_strcapitalize(str));
	return (0);
}
