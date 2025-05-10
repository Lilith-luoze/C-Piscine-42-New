# include <stdio.h>
# include <string.h>
# include <unistd.h>
#include <ctype.h>

char *ft_strlowcase(char *str)
{
    char *ori_str;

    ori_str = str;
    //modify every uppercase in the string in-place
    while(*str)
    {
        if (*str >= 'A' && *str <= 'Z' )
            *str = *str + ('z' - 'Z');
        str++;
    }
    return (ori_str);
}



// int main()
// {
//     // test if it's only a read-only string, can YOU modify it? -No.
//     // char *str = "i am pow. you are POW\0";
//     // printf("%s", ft_strlowcase(str));


//     // the def successful version:
//     char str[] = "i am pow. you are POW\0";

//     printf("%s", ft_strlowcase(str));

//     return (0);

// }
