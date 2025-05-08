# include <stdio.h>

void    ft_ultimate_div_mod(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *a / *b;
    *b = temp % *b;
}

int main()
{
    int dvdnt = 7;
    int dvor = 3;
    printf("%i  %i ",dvdnt , dvor);

    ft_ultimate_div_mod(&dvdnt, &dvor);
    printf("%i  %i ",dvdnt , dvor);//2 1
    return (0);
}