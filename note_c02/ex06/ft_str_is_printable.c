# include <stdio.h>
# include <string.h>
# include <unistd.h>
#include <ctype.h>
//  Check printable or not using standard c function : isprint
//  \0 is ascii 0. how to check this? -- ok. it is probably the only exception for
//the question. 
int ft_str_is_printable(char *str)
{
    while(*str)
    {
        if (*str >= 32 && *str <= 126 )
           str++;
        else 
            return (0);
    }
    return (1);
    
}



// int main()
// {
//     char *str = "EWV\0";

//     printf("%i", ft_str_is_printable(str));
//     // printf("%i", isprint(127));
//     return (0);

// }
