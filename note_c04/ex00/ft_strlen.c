
int ft_strlen(char *str)
{
    int i;
    i = 0;
    while(*str)
    {
        str++;
        i++;
    }
    return (i);
}

// # include <stdio.h>
// # include <string.h>

// int main()
// {
//     char *str = "12345";
//     printf("%i", ft_strlen(str));
//     return (0);
// }