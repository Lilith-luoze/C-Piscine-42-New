//safeguard: stop overflow from sqrt * sqrt
int ft_recursive_sqrt(int nb, int sqrt)
{
    if (sqrt > nb / sqrt)
        return(0);
    if (sqrt * sqrt == nb)
        return (sqrt);
    return (ft_recursive_sqrt(nb , sqrt + 1));
}
int ft_sqrt(int nb)
{
    if (nb <= 0 )
        return (0);
    return (ft_recursive_sqrt(nb, 1));
}

/*the square root of a given number (if it exists), or 0
if the square root is an irrational number.*/

// #include <stdio.h>
// int main()
// {
//     int nb = 25;
//     int result = ft_sqrt(nb);
//     if (result != 0)
//         printf("The square root of %d is %d\n", nb, result);
//     else
//         printf("The square root of %d does not exist\n", nb);
//     return 0;
// }