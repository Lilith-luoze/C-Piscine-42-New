int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
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
int ft_atoi_valid_base(char *str , char *dic_digits)
{
    int digit;
    int nb;
    int sign;
    int radix;
    radix = ft_strlen(dic_digits);
    nb = 0;
    //dealing space
    while ((*str >= 9 && *str <= 13) || *str == ' ')
        str++;
    // dealing with signs
    sign = 1;
    while (*str == '+' || *str == '-')
    {
        if (*str == '-')
            sign = -sign;
        str++;
    }
    //add to int
    while (*str && (*str >= dic_digits[0] && *str <= dic_digits[radix - 1]))
    {
        digit = *str - dic_digits[0];   
        nb = nb * radix + digit;
        str++;
    }
    if (sign == -1 )
        nb = -nb;
    return (nb);
}

int ft_atoi_base(char *str, char *base)
{
    int len;
    if (base == NULL)
        return (0);
    len = 0;
    while (base[len])
    {
        if (base[len] == '+' || base[len] == '-')
            return (0);
        len++;
    }
    if (len <= 1 || base[0] == ' ' || ft_existdup(base))
        return (0);
    return(ft_atoi_valid_base(str, base));
}

#include <stdio.h>

int ft_atoi_base(char *str, char *base);

int main(void)
{
    // Valid base conversions
    printf("Base 10: %d\n", ft_atoi_base("   ---+--+1234ab567", "0123456789"));  // → -1234
    printf("Binary: %d\n", ft_atoi_base("   +--+1011", "01"));                  // → -11
    printf("Hex: %d\n", ft_atoi_base("1A", "0123456789ABCDEF"));               // → 26
    printf("Octal: %d\n", ft_atoi_base("20", "01234567"));                     // → 16
    printf("Poneyvif: %d\n", ft_atoi_base("poney", "poneyvif"));               // → value in base-8

    // Edge cases
    printf("Invalid base (duplicates): %d\n", ft_atoi_base("123", "001234"));  // → 0
    printf("Invalid base (only one char): %d\n", ft_atoi_base("111", "1"));    // → 0
    printf("Invalid base (contains '+'): %d\n", ft_atoi_base("111", "0123+")); // → 0
    printf("Invalid base (contains '-'): %d\n", ft_atoi_base("111", "01-23")); // → 0
    printf("Invalid base (contains space): %d\n", ft_atoi_base("111", "01 23"));// → 0
    printf("Invalid digit: %d\n", ft_atoi_base("1Z", "0123456789ABCDEF"));     // → 1 (stops at Z)

    return 0;
}
