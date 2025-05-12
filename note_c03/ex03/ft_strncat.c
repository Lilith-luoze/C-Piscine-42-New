
# include <string.h>
# include <stdio.h>

char *ft_strncat(char *dest, char *src, unsigned int nb)
{
    char * ori_dest;
    unsigned int i;

    i = 0;
    ori_dest = dest;

    while(*dest)
    {
        dest++;
    }
    while (*src && i < nb)
    {
        *dest = *src;
        dest++;
        src++;
        i++;
    }
    *dest = '\0';
    return (ori_dest);
    
}

int main()
{
    char s1[100] = "am i ";
    char *s2 = "fool or smart? ";
    char s3[100] = "am i ";
    unsigned int nb = 4;

    printf("%s\n", ft_strncat(s1 , s2, nb));
    printf("%s\n", strncat(s3 , s2, nb));
    

    return (0);
}
