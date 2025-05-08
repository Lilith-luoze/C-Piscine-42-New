# include <stdio.h>
void ft_swap(int *a, int *b)
{
    int c;
    c  = *a;
    *a = *b;
    *b = c; 
}

int main()
{
    int a = 0;
    int b = 2;

    ft_swap(&a, &b);
    printf("%i  %i",a , b);
    return (0);
}