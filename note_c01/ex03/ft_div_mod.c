# include <stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod)
{
    *div = a / b;
    *mod = a % b;
}

int main()
{
    int dvdnt = 7;
    int dvor = 3;
    int div;
    int mod;

    ft_div_mod(dvdnt, dvor, &div, &mod);
    printf("%i  %i %i  %i ",dvdnt , dvor, div , mod);
    return (0);
}