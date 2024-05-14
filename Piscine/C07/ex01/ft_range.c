#include <stdlib.h>
//#include <stdio.h>

int *ft_range(int min, int max)
{
    int *array;
    unsigned int i;

    i = 0;
    if (min >= max)
    {
        return (0);
    }
    array = (int *)malloc(sizeof(int) * (max - min));
    if (!(array))
    {
        return (NULL);
    }
    while (min < max)
    {
        array[i] = min;
        min++;
        i++;
    }
    return (array);
}

/*int main()
{
    int min = 5;
    int max = 10;

    int *result = ft_range(min, max);

    if (result != NULL)
    {
        printf("Range from %d to %d:\n", min, max);
        for (int i = 0; i < max - min; i++)
        {
            printf("%d ", result[i]);
        }
        printf("\n");
        free(result);
    }
    else
    {
        printf("Invalid range.\n");
    }
    return 0;
}*/