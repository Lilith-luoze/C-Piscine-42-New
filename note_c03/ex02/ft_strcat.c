

# include <string.h>
# include <stdio.h>



char *ft_strcat(char *dest, char *src)
{
    char * ori_dest;
    ori_dest = dest;

    while(*dest)
    {
        dest++;
    }
    while (*src)
    {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';
    return (ori_dest);
}

int main()
{
    char s1[100] = "am i ";
    char *s2 = "fool or smart? ";
    char s3[100] = "am i ";

    printf("%s\n", ft_strcat(s1 , s2));
    printf("%s\n", strcat(s3 , s2));
    

    return (0);
}
