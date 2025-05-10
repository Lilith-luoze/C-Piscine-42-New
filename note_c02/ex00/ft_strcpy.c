# include <unistd.h>
# include <string.h>

void putstr(char* str)
{
    while (*str)
    {
        write(1, str, 1);
        str++;
    }
    write(1,"\n",1);
}


char *ft_strcpy(char *dest, char *src)
{
    char *ori_dest;

    ori_dest = dest;
    while(*src)
    {
        *dest = *src;
        dest++;
        src++;
    }
    return (ori_dest);
}

// int main()
// {
//     char dest_ft[100];
//     char dest_builtin[100];
//     char *src = "try this one  (\0";
//     ft_strcpy(dest_ft, src);
//     strcpy(dest_builtin, src);
//     putstr(dest_ft);
//     putstr(dest_builtin);
//     return (0);

// }

