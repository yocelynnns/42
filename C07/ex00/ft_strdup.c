#include <stdlib.h>
//#include <stdio.h>

int ft_strlen(char *str)
{
	unsigned int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char *ft_strcpy(char *str, char *dest)
{
	unsigned int i;

	i = 0;
	while (str[i] != '\0')
	{
		dest[i] = str[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char *ft_strdup(char *src)
{
	unsigned int i;
	char *dest;

	i = ft_strlen(src);
	dest = (char *)malloc(sizeof(char) * i);
	if (!(dest))
	{
		return (NULL);
	}
	return (ft_strcpy(src, dest));
}

/*int main()
{
	char *src = "Hello, world!";
	char *duplicate = ft_strdup(src);

	if (duplicate != NULL)
	{
		printf("Original string: %s\n", src);
		printf("Duplicated string: %s\n", duplicate);
		free(duplicate);
	}
	else
	{
		printf("Memory allocation failed\n");
	}

	return 0;
}*/