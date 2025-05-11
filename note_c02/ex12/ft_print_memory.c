# include <stdio.h>
# include <string.h>
# include <unistd.h>
# include <ctype.h>

void    prt_addrs_head(unsigned char *str, unsigned int size)
{
    // unsigned char **head;
    unsigned int i;
    i = 0;
    while (i < size)
    {
        write(1, str,1);
        i++;
    }

}

// void    prt_content_raw()
// {
//     while (i < 16 )
//     {
//         write(1, " ", 1);
//         i++;
//     }

// }

// void prt_content(unsigned char *str, unsigned int size)
// {
//     //The 3rd column : normal print - print printable and if non, print .
//     unsigned int i;
//     i = 0;
//     while (i < size)
//     {
//         if (str[i] >= 32 && str[i] <= 126)
//         write(1,&str[i],1 );
//     else
//     write(1, ".", 1);
//     i++;
//     }
//     write(1, "\n", 1);

// }

// void *ft_print_memory(void *addr, unsigned int size)
// {
//     unsigned char *str = (unsigned char *)addr; // why? what's the trick

//     prt_content(str, size);
//     return(str);
// }

int main()
{
    unsigned char *str = "hey";

    prt_addrs_head(str, sizeof(str));
    return (0);
}