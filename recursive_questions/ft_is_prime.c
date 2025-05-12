# include <stdio.h>
// a bit advanced
int lilith_prime(int nb, int factor_check)
{
    if (nb % factor_check == 0)
        return (0);
    if (factor_check * factor_check > nb / 2)
        return (1);
    return (lilith_prime(nb, factor_check + 1));

}
int ft_is_prime(int nb)
{
    if (nb <= 1 )
        return (0);

    return (lilith_prime(nb , 2));
    
}


int main()
{
    printf("%i", ft_is_prime(-5));
    
    return (0);
}