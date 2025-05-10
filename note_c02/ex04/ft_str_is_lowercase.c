# include <stdio.h>
# include <string.h>
# include <unistd.h>

int ft_str_is_lowercase(char *str)
{
    while(*str)
    {
        if (*str >= 'a' && *str <= 'z' )
           str++;
        else 
            return (0);
    }
    return (1);
    
}



// int main()
// {
//     char *str = "a\0";

//     printf("%i", ft_str_is_lowercase(str));

//     return (0);

// }
