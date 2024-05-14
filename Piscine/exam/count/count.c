#include <stdio.h>

int count_Z(char *string) {
    int count = 0;
    while (*string) {
        if (*string == 'Z') {
            count++;
        }
        string++;
    }
    return count;
}

int main() {
    char input_string[] = "ZZZZZ.";
    printf("Number of 'Z' in the string: %d\n", count_Z(input_string));
    return 0;
}