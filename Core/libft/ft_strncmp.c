#include <stdio.h>
#include <string.h>

int strncmp(const char *s1, const char *s2, size_t n)
{
    size_t	i;

    i = 0;
	if (n == 0)
	{
		return (0);
	}
	while (s1[i] == s2[i] && s1[i] != '\0' && i < n - 1)
	{
		i++;
	}
	if (s1[i] == s2[i])
	{
		return (0);
	}
	else
	{
		return (((unsigned char)s1[i] - (unsigned char)s2[i]));
	}
}

int main() {
    // Test cases
    struct {
        const char *s1;
        const char *s2;
        size_t n;
        int expected;
    } testCases[] = {
        {"apple", "apple", 5, 0},          // Same strings
        {"apple", "apples", 5, 0},         // First n characters are the same
        {"apple", "apples", 6, -'s'},      // Different at n-th character
        {"apple", "apricot", 3, 0},        // First 3 characters are the same
        {"apple", "apricot", 5, 'l' - 'r'},// Different within n characters
        {"apple", "banana", 3, 'a' - 'n'}, // Different within n characters
        {"apple", "apple", 0, 0},          // n is 0
        {"apple", "", 5, 'a'},             // Compare with empty string
        {"", "banana", 5, -'b'},           // Compare empty string with non-empty string
        {"apple", "APPLE", 5, 'a' - 'A'},  // Case sensitivity
        {"short", "shorter", 10, -'e'},    // Comparing string shorter than n with longer string
    };

    // Number of test cases
    int numTests = sizeof(testCases) / sizeof(testCases[0]);

    // Running test cases
    for (int i = 0; i < numTests; ++i) {
        int result = strncmp(testCases[i].s1, testCases[i].s2, testCases[i].n);
        if (result == testCases[i].expected) {
            printf("Test case %d passed.\n", i + 1);
        } else {
            printf("Test case %d failed: strncmp(\"%s\", \"%s\", %zu) = %d, expected %d\n",
                   i + 1, testCases[i].s1, testCases[i].s2, testCases[i].n, result, testCases[i].expected);
        }
    }

    return 0;
}