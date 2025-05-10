# include <stdio.h>
# include <string.h>
# include <unistd.h>


int ft_str_is_alpha(char *str)
{
    while(*str)
    {
        if ((*str >= 'a' && *str <= 'z' ) || (*str >= 'A' && *str <= 'Z'))
           str++;
        else 
            return (0);
    }
    return (1);
    
}

// int main()
// {
//     char *str = "trythisone\0";

//     printf("%i", ft_str_is_alpha(str));

//     return (0);

// }
