int ft_fibonacci(int index)
{
    if (index <= -1)
        return (-1);
    if (index == 0)
        return (0);
    if (index == 1 )
        return (1);
    return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
/*Create a function ft_fibonacci, that returns the n-th element of the Fibonacci
sequence, with the first element at index 0.
The Fibonacci sequence will be considered to start as follows: 0, 1, 1, 2.
If index is less than 0, the function should return -1.
10*/

// # include <stdio.h>
// int main()
// {
//     printf("%i\n", ft_fibonacci(3));
//     return (0);
// }