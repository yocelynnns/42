#include <stdio.h>

char	*ft_strchr(const char *s, int c)
{
	char	*temp;
	size_t		i;

	temp = (char*)s;
	i = 0;
	while (*(temp + i))
	{
		if (*(temp + i) == c)
			return (temp + i);
		i++;
	}
	if (c == '\0')
		return (temp + i);
	return (0);
}


int main(void)
{
    // Test cases
    const char str1[] = "Hello, world!";
    const char str2[] = "This is a test string.";
    const char str3[] = "Another example.";

    // Test case 1: Character is in the string
    char *result = ft_strchr(str1, 'o');
    if (result)
        printf("Test 1: Found 'o' in \"%s\" at position: %ld\n", str1, result - str1);
    else
        printf("Test 1: 'o' not found in \"%s\"\n", str1);

    // Test case 2: Character is not in the string
    result = ft_strchr(str1, 'z');
    if (result)
        printf("Test 2: Found 'z' in \"%s\" at position: %ld\n", str1, result - str1);
    else
        printf("Test 2: 'z' not found in \"%s\"\n", str1);

    // Test case 3: Character is the null terminator
    result = ft_strchr(str1, '\0');
    if (result)
        printf("Test 3: Found '\\0' in \"%s\" at position: %ld\n", str1, result - str1);
    else
        printf("Test 3: '\\0' not found in \"%s\"\n", str1);

    // Test case 4: Another string, character present
    result = ft_strchr(str2, 't');
    if (result)
        printf("Test 4: Found 't' in \"%s\" at position: %ld\n", str2, result - str2);
    else
        printf("Test 4: 't' not found in \"%s\"\n", str2);

    // Test case 5: Another string, character not present
    result = ft_strchr(str3, 'x');
    if (result)
        printf("Test 5: Found 'x' in \"%s\" at position: %ld\n", str3, result - str3);
    else
        printf("Test 5: 'x' not found in \"%s\"\n", str3);

    return 0;
}

int main(void)
{
    const char *str = "Hello, world!";
    char ch = 'w';
    char *result;

    result = ft_strchr(str, ch);
    if (result)
    {
        printf("%s\n", result);
    }
    else
    {
        printf("NULL\n");
    }

    return 0;
}