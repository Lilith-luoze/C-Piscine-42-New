
# include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

//data in prt[33] would be [<-> 000..00 xyz \0]
void ft_prt_char(char *prt)
{
    int flag;
    flag = 0;
    if(*prt == '-')
        write(1, prt, 1);
    prt++;
    while(*prt)
    {
        while (*prt == '0' && flag == 0)
            prt++;
        write(1, prt,1);
        flag = 1;
        prt++;
    }
    if (flag == 0) 
        write(1, "0", 1);
}

//prt[33]
void  ft_itoa_base(int nb , char * avail_digits , char *prt)
{
    unsigned int redix;
    unsigned int prt_nb;
    int i;
    i = -1;
    redix = (unsigned int)ft_strlen(avail_digits); // take decimal as example (10) 
    while (++i < 33)
        prt[i] = '0';
    prt[32] = '\0';
    if (nb < 0)
    {
        prt[0] = '-'; 
        prt_nb = (unsigned int)(-nb);
    }
    else
        prt_nb = (unsigned int)nb ;
    i = -1;
    while (prt_nb >= redix)
    {   
        prt[31 - (++i)] = avail_digits[prt_nb % redix];
        prt_nb /= redix;
    }
    prt[31 - (++i)] = avail_digits[prt_nb % redix];
}

int	ft_existdup(char *str)
{
    int tar;
    int cnt;
    int j;
   
    tar = 0;

    while(str[tar])
    {
        j = 0;
        cnt = 0;
        while (str[j])
        {
        if (str[tar] == str[j])
            cnt++;
        j++;
        }
    	if (cnt >= 2)
		    return (1);
        tar++;
    }
	return (0);
}

/*we had two solid arg. First check the base legitmacy. */
void ft_putnbr_base(int nbr, char *base)
{
    int len;
    char prt[33];
    len = 0;
    if (base == NULL)
        return;
    while (base[len])
    {
        if (base[len] == '+' || base[len] == '-')
            return;
        len++;
    }
    if (len <= 1 || base[0] == ' ' || ft_existdup(base))
        return;
    ft_itoa_base(nbr , base ,prt);
    ft_prt_char(prt);
}


// # include <stdio.h>
// # include <string.h>
// # include <limits.h>

// int	main(void)
// {
// 	ft_putnbr_base(42, "0123456789");
// 	printf("  --> Expected: 42\n");

// 	ft_putnbr_base(0, "01");
// 	printf("  --> Expected: 0\n");

// 	ft_putnbr_base(42, "0123456789ABCDEF");
// 	printf("  --> Expected: 2A\n");

// 	ft_putnbr_base(-42, "0123456789");
// 	printf("  --> Expected: -42\n");

// 	ft_putnbr_base(42, "01234");
// 	printf("  --> Expected: 132\n");

// 	ft_putnbr_base(42, "012344");
// 	printf("  --> Expected: (nothing)\n");


// 	ft_putnbr_base(42, "0");
// 	printf("  --> Expected: (nothing)\n");

// 	return (0);
// }

