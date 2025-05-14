# include <stdio.h>
# include <string.h>
# include <unistd.h>
# include <ctype.h>

//  ascii is 100 or 200, which needs two digits in hex to represent one char.
//So write a function to print that char.
void    wrt_hex_per_char(char *a)
{
    int dst;
    char *hex = "0123456789abcdef";
    dst = (*a) / 16;
    write(1, hex+dst, 1);
    dst = (*a) % 16;
    write(1, hex+dst, 1);
}

void    prt_addrs_hex(unsigned long addr_digits)
{
    char *hex = "0123456789abcdef";
    char str_hex[16];
    int i;
    i = 0;
    while (i < 16)
    {
        str_hex[15 - i ] = *(hex + addr_digits % 16);
        addr_digits /= 16;
        i++;
    }
    write(1, str_hex, 16);
    write(1 , ": ", 2);
}
//32-126
void    prt_content_hex(char* addr, unsigned int size)
{
    unsigned int i;
    i = 0;
    while (i < size )
    {
        wrt_hex_per_char(addr + i);
        if (i % 2 == 1)
           write(1, " ", 1);
        i++;
    }
    while (i < 16)
    {
        write(1, "  ", 2);
        if (i % 2 == 1)
           write(1, " ", 1);
        i++;
    }
}

void prt_content_ascii(char *str, unsigned int size)
{
    //The 3rd column : normal print - print printable and if non, print .
    unsigned int i;
    i = 0;
    while (i < size)
    {
    if (str[i] >= 32 && str[i] <= 126)
        write(1, str + i, 1);
    else
        write(1, ".", 1);
    i++;
    }
    write(1, "\n", 1);
}

//deal with the problem of passing less than / more than 16 
void *ft_print_memory(void *addr, unsigned int size)
{
    unsigned int part_size;
    unsigned int offset;
    offset = 0;
    char *str = (char *)addr;
    if (size == 0)
        return (NULL);
    // how to control it to stop when size is a unsigned int.
    //the trick is never deduct size
    part_size = 16;
    while (offset < size)
    {
        if (size - offset < 16)
            part_size = size - offset;
        prt_addrs_hex((unsigned long)(str + offset));
        prt_content_hex(str + offset, part_size);
        prt_content_ascii(str + offset, part_size);
        offset += 16;
    }
    return(addr);
}

int main()
{
    char str[] = "Bonjour les aminches..c.est fou.tout.ce qu onpeut faire avec...print_memory....1o1.1o1. .";
    // printf("%lu", sizeof(str));

    ft_print_memory(str, sizeof(str)-1);
    return (0);
}

