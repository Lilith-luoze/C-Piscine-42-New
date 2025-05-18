// be aware of the possible overflow when  increment the multiplier
int ft_is_prime(int nb)
{
    int divisor;
    divisor = 2;
    if (nb <= 1)
        return (0);
    while (divisor <= nb / divisor)
    {
        if (nb % divisor == 0)
            return(0);
        divisor++;
    }
    return (1);
}
/*returns 1 if the given number is a prime number and 0 if it
is not.0 and 1 are not prime numbers.*/
//A clever method to find prime number: a * b > sqrt * sqrt = nb
// # include <stdio.h>
// int main()
// {
//     int nb = 29;
//     if (ft_is_prime(nb))
//         printf("%d is a prime number\n", nb);
//     else
//         printf("%d is not a prime number\n", nb);
//     return 0;
// }