# include <stdio.h>
# include <string.h>
# include <unistd.h>
# include <ctype.h>

void    put_hex(unsigned char *char)
{
    char hex[] = "0123456789abcdef";
    char str_hex
    int i;
    i = 0;


}

void    prt_addrs_hex(unsigned char *str)
{
    // value in str -- the address for the first el in the str
    // so print value in hex format -- 8 bytes
    unsigned int i;
    i = 0;
    while (i < size)
    {
        write(1, str,1);
        i++;
    }

}

void    prt_content_hex()
{
    while (i < 16 )
    {
        write(1, " ", 1);
        i++;
    }

}

void prt_content_ascii(unsigned char *str, unsigned int size)
{
    //The 3rd column : normal print - print printable and if non, print .
    unsigned int i;
    i = 0;
    while (i < size)
    {
        if (str[i] >= 32 && str[i] <= 126)
        write(1,&str[i],1 );
    else
    write(1, ".", 1);
    i++;
    }
    write(1, "\n", 1);

}

void *ft_print_memory(void *addr, unsigned int size)
{
    unsigned char *str = (unsigned char *)addr;
    prt_addrs(addr);
    prt_content_hex(str , size);
    prt_content_ascii(str , size);
    return(addr);
}

int main()
{
    char str[] = "hey";
    printf("%lu", sizeof(str));

    ft_print_memory(str, sizeof(str));
    return (0);
}
