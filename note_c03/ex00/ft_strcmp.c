# include <string.h>
# include <stdio.h>



int ft_strcmp(char *s1, char *s2)
{
    while ( *s1 && *s2 && *s1 == *s2)
    {
        s1++;
        s2++;
    }
    return(*s1 - *s2);
}

int main()
{
    char *str1 = "abc\0d";
    char *str2 = "abc\0e";

    printf("%i\n", ft_strcmp(str1 , str2));
    printf("%i\n", strcmp(str1 , str2));
    

    return (0);
}