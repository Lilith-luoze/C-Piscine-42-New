# include <stdio.h>

void    ft_sort_int_tab(int *tab, int size)
{
    //1. create copied loop
    int i;
    int copied_tab[size];

    i = 0;
    while(i < size)
    {
        copied_tab[i] = tab[i];
        i++;
    }
    //
    int i ;
    i = 0;
    while(tab[i] > tab[i+1] && tab[i])

}

int main()
{
    int str[] =  {5,4,3,2,9,0};
    int i = 0;
    int n = 6;

    ft_rev_int_tab(str, n);


    while (i < n)
    {
        printf("%i", str[i]);
        i++;
    }
    return(0);
}