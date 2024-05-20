#include "libft.h"

char    *ft_strdup(const char *s)
{
    size_t  size;
    char    *d;

    size = ft_strlen(s);
    d = (char *)malloc(size * sizeof(char) + 1);
    if (d == NULL)
        return (NULL);
    ft_memcpy(d, s, size);
    d[size] = '\0';
    return (d);
}

int main()
{
    char s[20] = "Hello World";
    char s1[20] = "Hello World";
    char *result;
    char *result1;

    result = ft_strdup(s);
    result1 = strdup(s1);

    printf("The first string: %s\n", s);
    printf("The first string (o): %s\n", s1);

    printf("The duplicated string: %s\n", result);
    printf("The duplicated string (o): %s\n", result1);

    // Free the allocated memory
    free(result);
    free(result1);

    return 0;
}