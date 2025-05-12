# include <stdio.h>

int ft_recursive_factorial(int nb)
{
    if (nb == 1 || nb == 0)
        return (1);
    if (nb <= -1 )
        return (0);
    return (ft_recursive_factorial(nb - 1) * nb); 
}

int main()
{
    printf("%i", ft_recursive_factorial(0));
    
    return (0);
}