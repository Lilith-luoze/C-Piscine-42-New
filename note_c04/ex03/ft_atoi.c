# include <stdio.h>
# include <string.h>
# include <unistd.h>
# include <limits.h>

int ft_atoi(char *str)
{
    int a;
    int nb;
    nb = 0;
    
    if (*str && *str >= '0' && *str <= '9')
    {
        a = *str - '0';
        nb = nb * 10 + a;
    }
    return (nb);

}


int main()
{
    // char *str = "12345";
    // printf("%i", INT_MIN);
    ft_putnbr(INT_MIN);
    return (0);
}