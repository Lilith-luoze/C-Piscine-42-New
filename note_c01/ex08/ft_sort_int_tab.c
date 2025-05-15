# include <stdio.h>
//sort by ascending order.

//switch positions by creating a temp value 
void    ft_sort_int_tab(int *tab, int size)
{
    //1. create copied loop
    int i;
    int j;
    int temp;
    j = 0;
    while (j < size)
    {
        i = 1;
        while(i < size - j )
        {
            if (tab[i-1] > tab[i])
            {
                temp = tab[i];
                tab[i] = tab[i-1];
                tab[i-1] = temp;
            }
            i++;
        }
        j++;
    }

}

int main()
{
    int str[] ={0, -1, 2147483647, -2147483648, 42};
    int i = 0;
    int n = 5;
    ft_sort_int_tab(str , n);

    while (i < n)
    {
        printf("%i ", str[i]);
        i++;
    }
    return(0);
}