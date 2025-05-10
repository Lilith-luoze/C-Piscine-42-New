# include <stdio.h>
# include <string.h>
# include <unistd.h>

int ft_str_is_uppercase(char *str)
{
    while(*str)
    {
        if (*str >= 'A' && *str <= 'Z' )
           str++;
        else 
            return (0);
    }
    return (1);
    
}



// int main()
// {
//     char *str = "EWV\0";

//     printf("%i", ft_str_is_uppercase(str));

//     return (0);

// }
