size_t strlen(const char *str)
{
    size_t i;
	
	i = 0;
    while (str[i] != '\0')
        i++;
    return i;
}

char* strrchr( char* str, int chr )
{
    char    *temp;
    size_t  i;

    temp = (char *)s;
    i = strlen(s);
    if (c == '\0')
        return (temp + i);
    while (i != 0)
    {
        if (temp[i] == (char)chr)
            return (temp + i);
        i--;
    }
    if (s[0] == (char)chr)
        return (temp);
    return (0);
}

int main() {
    char str[] = "Hello, World!";
    int chr = 'o';
    
    // Demonstrate strlen
    size_t len = strlen(str);
    printf("The length of the string '%s' is: %zu\n", str, len);
    
    // Demonstrate strrchr
    char *last_occurrence = strrchr(str, chr);
    if (last_occurrence) {
        printf("The substring starting from the last occurrence of character '%c' in the string '%s' is: '%s'\n", chr, str, last_occurrence);
    } else {
        printf("The character '%c' is not found in the string '%s'\n", chr, str);
    }
    
    return 0;
}