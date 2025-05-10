# include <stdio.h>
# include <string.h>
# include <unistd.h>

// n will usually be equal to 1 less than dest. It's set mannually.
// there's no promises to NUL terminate the dest string, if n isn't set rightly.
// Dest's length is directly associated with n;

void putstr(char* str)
{
    while (*str)
    {
        write(1, str, 1);
        str++;
    }
    write(1,"\n",1);
}
//  Although the behavior of this ft function is not the same as standard strncpy, 
//but it passed the mini and the same behavior as the manual. So who knows. 
//Let's just try.
char *ft_strncpy(char *dest, char *src, unsigned int n)
{
    unsigned int i;

    i = 0;
    while(src[i] && i < n)
    {
        dest[i] = src[i];
        i++;
    }
    while ( i < n )
    {
        dest[i] = '\0';
        i++;
    }
    return (dest);
    // 1. at most n from src to dest
    // 2. src < n , fill the rest of dest with /0

}


// int main()
// {
//     char dest_ft[5];
//     char dest_builtin[5];
//     char *src = "try this one  (\0";
//     ft_strncpy(dest_ft, src , sizeof(dest_ft));
//     strncpy(dest_builtin, src, sizeof(dest_builtin));
//     printf("%s\n", dest_ft);
//     printf("%s\n", dest_builtin );

//     return (0);

// }
