# include <stdlib.h>

int ft_ultimate_range(int **range, int min, int max)
{
    int size;
    int i;
    // check arg
    if (min >= max)
    {
        *range = NULL; 
        return (0);
    }
    //count the size 
    
    size  = max - min;
    //malloc
    (*range) = malloc(sizeof(int) * size);
    if (*range == NULL)
        return (-1);
    //fill 
   
    i = 0;
    while (i < size)
    {
        (*range)[i] = min + i;
        i++;
    }
    return ((int)size);

}

// # include <stdio.h>
// int   main()
// {
//     int *a;
//     int **b = &a;
//     ft_ultimate_range(b, 3,10);
//     for (int i = 0; i < 7; i++)
//     {
//         printf("%i ", a[i]);
//     }
//     free(a);
// }
