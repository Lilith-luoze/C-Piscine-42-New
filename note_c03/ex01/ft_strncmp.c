
# include <string.h>
# include <stdio.h>



int ft_strncmp(char *s1, char *s2, unsigned int n)
{
    unsigned int i;
    i = 0;
    while ( *s1 && *s2 && *s1 == *s2 && i < n )
    {
        s1++;
        s2++;
        i++;
    }
    if (i == n)
        return (0);
    return(*s1 - *s2);
}

int main()
{
    char *str1 = "12345";
    char *str2 = "123456";

    printf("%i\n", ft_strncmp(str1 , str2 , 6));
    printf("%i\n", strncmp(str1 , str2, 6));
    

    return (0);
}
