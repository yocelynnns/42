#include <stdio.h>
#include <string.h>

// Declaration of the bzero function
void bzero(void *s, size_t n);

int main() {
    // Test case 1: Null pointer
    char ptr[5] = "Test";
    printf("Before bzero (null pointer): %s\n", ptr);
    bzero(ptr, 5); // No effect since ptr is null
    printf("After bzero (null pointer): %s\n\n", ptr);

    // Test case 2: Normal buffer
    char buffer[10] = "Hello";
    printf("Before bzero (normal buffer): %s\n", buffer);
    bzero(buffer, 5); // Set first 5 bytes to zero
    printf("After bzero (normal buffer): %s\n\n", buffer);

    // Test case 3: Buffer with length greater than size of array
    char long_buffer[10] = "World"; // Increase size to 10
    printf("Before bzero (long buffer): %s\n", long_buffer);
    bzero(long_buffer, 10); // Set all 10 bytes to zero
    printf("After bzero (long buffer): %s\n\n", long_buffer);

    // Test case 4: Buffer with zero length
    char empty_buffer[10] = "Test";
    printf("Before bzero (empty buffer): %s\n", empty_buffer);
    bzero(empty_buffer, 0); // No effect since length is zero
    printf("After bzero (empty buffer): %s\n\n", empty_buffer);

    // Test case 5: Buffer with all bytes already zero
    char zero_buffer[5] = {0};
    printf("Before bzero (zero buffer): %s\n", zero_buffer);
    bzero(zero_buffer, 5); // No effect since all bytes are already zero
    printf("After bzero (zero buffer): %s\n\n", zero_buffer);

    return 0;
}

void bzero(void *s, size_t n)
{
    unsigned char *temp = (unsigned char *)s;
    size_t i;
    for (i = 0; i < n; i++) {
        temp[i] = '\0';
    }
}

void bzero(void *s, size_t n)
{
    size_t i;
    unsigned char *temp;
    
    i = 0;
    temp = (unsigned char *)s;
    while (n > 0)
    {
        temp[i] = 0;
        i++;
        n--; // Decrement n to avoid infinite loop
    }
    temp[i] = '\0'; // Null-terminate the string
}

