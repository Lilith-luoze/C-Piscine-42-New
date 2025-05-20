
int ft_atoi(char *str)
{
    int digit;
    int nb;
    int sign;
    nb = 0;
    //dealing space
    while ((*str >= 9 && *str <= 13) || *str == ' ')
        str++;
    // dealing with signs
    sign = 1;
    while (*str == '+' || *str == '-')
    {
        if (*str == '-')
            sign = -sign;
        str++;
    }
    //add to int
    while (*str && (*str >= '0' && *str <= '9'))
    {
        digit = *str - '0';   
        nb = nb * 10 + digit;
        str++;
    }
    if (sign == -1 )
        nb = -nb;
    return (nb);
}

// # include <stdio.h>
// # include <string.h>
// # include <unistd.h>
// # include <limits.h>

// int main()
// {
//     char *str = "  ---+--+1234ab567";
    
//     printf("%i", ft_atoi(str));
//     return (0);
// }