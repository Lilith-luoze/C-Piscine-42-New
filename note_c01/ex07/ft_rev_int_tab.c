# include <stdio.h>

void ft_rev_int_tab(int *tab, int size)
{
//copy to a new array int type
    int i;
    int copied_tab[size];

    i = 0;
    while(i < size)
    {
        copied_tab[i] = tab[i];
        i++;
    }
//modify the original array with the copied one
    i = 0;
    while(i < size)
    {
        tab[i] = copied_tab[size - i -1];
        i++;
    }
}

int main()
{
    int str[] =  {1,2,3,4,5,6,7,8,9,0};
    int i = 0;
    int n = 10;

    ft_rev_int_tab(str, n);


    while (i < n)
    {
        printf("%i", str[i]);
        i++;
    }
    return(0);
}