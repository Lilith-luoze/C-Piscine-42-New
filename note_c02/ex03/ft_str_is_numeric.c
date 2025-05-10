# include <stdio.h>
# include <string.h>
# include <unistd.h>

int ft_str_is_numeric(char *str)
{
    while(*str)
    {
        if (*str >= '0' && *str <= '9' )
           str++;
        else 
            return (0);
    }
    return (1);
    
}



// int main()
// {
//     char *str = "6473\0";

//     printf("%i", ft_str_is_numeric(str));

//     return (0);

// }
