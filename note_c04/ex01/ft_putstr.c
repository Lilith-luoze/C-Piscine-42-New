# include <stdio.h>
# include <string.h>
# include <unistd.h>


void ft_putstr(char *str)
{
    while(*str)
    {
        write(1, str , 1);
        str++;
    }
}

int main()
{
    char *str = "12345";
    ft_putstr(str);
    // printf("%i", ft_putstr(str));
    return (0);
}