# include <string.h>
# include <stdio.h>
// it is really a pain. I want to die in this question.
unsigned int  lili_strlen(char *str)
{
    unsigned int i;
    i = 0;
    while (*str)
    {
        str++;
        i++;
    }
    return (i);
}


unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
    unsigned int len_dest_str;
    unsigned int len_src_str;
    unsigned int i;
    i = 0;
    len_dest_str = lili_strlen(dest);
    len_src_str = lili_strlen(src);

    if (size <= len_dest_str + 1)
        return (len_dest_str + len_src_str);
    dest += len_dest_str;
    while (size - len_dest_str - 1 > 0 && *src)
    {
        *dest = *src;
        src++;
        dest++;
        size--;
    }
    if (!(len_dest_str >= size || size == 0))
        *dest = '\0';
    return (len_dest_str + len_src_str);
}

// int main()
// {
//     char dest_ft[100] = "To live or ";
//     char dest_builtin[100] = "To live or ";
//     char *src = "death, that's a question";
//     unsigned int a = sizeof(dest_builtin);
//     printf("%u %s\n", ft_strlcat(dest_ft, src , a), dest_ft);
//     printf("%lu %s\n", strlcat(dest_builtin , src, a), dest_builtin );
    

//     return (0);
// }