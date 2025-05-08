# include <stdio.h>

int ft_strlen(char *str)
{
    int len;

    len = 0;
    while (*str)
    {
        str++;
        len++;
    }
    return (len);
}

int main()
{
    char *str =  "1234567890\0";


    printf("%i", ft_strlen(str));
    return(0);
}