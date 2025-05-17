int ft_iterative_factorial(int nb)
{
    int fac;
    fac = 1;
    if (nb <= -1)
        return (0);
    while (nb)
    {
        fac = nb * fac;
        nb--;
    }
    return (fac);
}



# include <stdio.h>
# include <string.h>
# include <unistd.h>
# include <ctype.h>

int main()
{
    printf("%i\n", ft_iterative_factorial(0));
    return (0);
}