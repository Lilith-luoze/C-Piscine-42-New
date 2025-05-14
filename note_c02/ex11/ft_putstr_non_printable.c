# include <stdio.h>
# include <string.h>
# include <unistd.h>
#include <ctype.h>

void    put_ascii_num_hex(char * str)
{
    int n;
    char hex[] = "0123456789abcdef";

    n = *str; //ascii number for the char 0-127

    //the logic for hex-itoa is totally the same as dec-itoa
    //itoa (i to hex-char)
    int ori_n;
    int base = 1;
    ori_n = n;

    while(n >= 16)
    {
        n /= 16;
        base *= 16;
    }
    n = ori_n;
    int i = 0;
    write(1, "\\",1 );
    while(n >= 16)
    {
        i  = n / base;
        write(1, &hex[i], 1);
        n %= base;
        base /= 16;
    }
    if (ori_n <= 15)
        write(1, "0",1);
    write(1, &hex[n], 1);
}

void    put_ascii_num_dec(char * str)
{
    int n;
    int ori_n;
    int base = 1;


    n = *str;
    ori_n = n;

    //itoa (i to dec-char)
    while(n >= 10)
    {
        n /= 10;
        base *= 10;
    }
    n = ori_n;
    char prt;
    write(1, "\\",1 );
    while(n >= 10)
    {
        prt = n / base + '0';
        write(1, &prt, 1);
        n %= base;
        base /= 10;
    }
    prt = n / base + '0';
    write(1, &prt, 1);
}

// printable : 32-126
void ft_putstr_non_printable(char *str)
{
 // lowercase hexadecimal values, preceded by a backslash
    
    //write decimal first
    while(*str)
    {
        if(*str >= 32 && *str <= 126)
            write(1, str, 1);
        else
            put_ascii_num_hex(str);
        str++;
    }
 
}

// int main()
// {
//     char *str = "i am\ntom\0";
//     ft_putstr_non_printable(str);
//     return (0);
// }