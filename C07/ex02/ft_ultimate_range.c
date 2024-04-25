//#include <stdio.h>
#include <stdlib.h>

int     ft_ultimate_range(int **range, int min, int max)
{
    int     *tab;
    int     i;

    if (min >= max)
    {
        *range = NULL;
        return (0);
    }
    tab = (int *)malloc(sizeof(int) * (max - min));
    if (tab == NULL)
    {
        return (-1);
    }
    else
    {
        i = -1;
        while (++i < max - min)
        {
            tab[i] = min + i;
        }
        *range = tab;
        return (i);
    }
}

/*int main() {
    int min = 5;
    int max = 10;
    int *result;
    int size;

    size = ft_ultimate_range(&result, min, max);

    if (size >= 0) {
        printf("Range from %d to %d:\n", min, max);
        for (int i = 0; i < size; i++) {
            printf("%d ", result[i]);
        }
        printf("\n");
        free(result);
    } else {
        printf("Memory allocation failed.\n");
    }

    return 0;
}*/