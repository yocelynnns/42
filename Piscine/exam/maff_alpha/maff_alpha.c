#include <unistd.h>

int     main(void)
{
    write(1, "aBcDeFgHiJkLmNoPqRsTuVwXyZ", 26);
    write(1, "\n", 1);
    return (0);
}