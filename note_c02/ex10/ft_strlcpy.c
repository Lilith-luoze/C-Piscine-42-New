# include <stdio.h>
# include <string.h>
# include <unistd.h>
#include <ctype.h>



unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
    //copy until size-1, and nul term it.
    unsigned int i;
    i = 0;
    while((i < size-1) && (src[i]))
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    while(src[i])
    {
        i++;
    }
    return (i);
}




// int main()
// {
//     char src[] = "hey how are you?\0";
//     char dst_ft[5];
//     char dst_builtin[5];

//     printf("%u\n", ft_strlcpy(dst_ft, src, sizeof(dst_ft)));
//     printf("%zu\n", strlcpy(dst_builtin, src, sizeof(dst_builtin)));
//     printf("%s\n", dst_ft);
//     printf("%s\n", dst_builtin);

//     return (0);

// }
