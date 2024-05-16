size_t strlen(const char *str)
{
    size_t len;
	
	len = 0;
    while (str[len] != '\0')
        len++;
    return len;
}

size_t	strlcat(char *dst, const char *src, size_t size)
{
	size_t	len;
	size_t	iter;
	size_t	tempd;
	size_t 	temps;

	len = tempd;
	iter = 0;
	tempd = ft_strlen(dst);
	temps = ft_strlen(src);
	if(size < 1)
		return (temps + size);
	while (src[iter] && len < size - 1)
	{
		dst[len] = src[iter];
		len++;
		iter++;
	}
	dst[len] = '\0';
	if (size < tempd)
		return (temps + size);
	else
		return (tempd + temps);
}

#include <stdio.h>

int main() {
    char dest[20] = "Hello";
    const char *src = " World!";
    size_t buffer_size = sizeof(dest);

    // Print the initial state of dest
    printf("Initial dest: '%s'\n", dest);

    // Perform the concatenation using strlcat
    size_t result = strlcat(dest, src, buffer_size);

    // Print the final state of dest
    printf("Final dest: '%s'\n", dest);
    printf("Total length: %zu\n", result);

    return 0;
}