# include <stdlib.h>

int *ft_range(int min, int max)
{
    int *range;
    int i;
    i = 0;
    //check arg
    if (min >= max)
        return (NULL);
    //check size for malloc
    unsigned int size;
    size = (unsigned int)(max - min);
    //malloc

    range = malloc( sizeof(int) * size);
    if (range == NULL)
        return (NULL);
    //initialize
    while (min < max)
    {
        range[i] = min;
        min++;
        i++;
    }
    return (range);
}
// # include <stdio.h>
// int main()
// {
//     int *range;  
//     int i;
//     range = ft_range(1, 10);
//     if (range == NULL)
//         return (1);
//     i = 0;
//     while (i < 9)
//     {
//         printf("%d ", range[i]);
//         i++;
//     }
    
//     printf("\n");
//     free(range);
//     return (0);
// }

