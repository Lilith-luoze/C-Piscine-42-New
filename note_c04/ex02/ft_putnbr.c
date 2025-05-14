# include <stdio.h>
# include <string.h>
# include <unistd.h>
# include <limits.h>

void ft_putnbr(int nb)
{
    //so try the recursion
    char a;
    if (nb == INT_MIN)
    {
        write(1, "-2147483648", 11);
        return;
    }
    if (nb < 0)    
    {
        write(1, "-", 1);
        nb = -nb;
    }     
    if (nb >= 10)
        ft_putnbr(nb / 10);
    a = nb % 10 + '0';
    write(1,  &a, 1);
}

int main()
{
    // char *str = "12345";
    // printf("%i", INT_MIN);
    ft_putnbr(INT_MIN);
    return (0);
}