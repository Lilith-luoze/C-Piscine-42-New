#include <unistd.h>

void	ft_putstr(int n, char *dgts) //checkd
{
    // print out the array using write (loop, n) > (one function for print out the array)

	int	i;

	i = 0;
	while (i < n)
        write(1, &dgts[i], 1);
    // add the comma if it's not the last combo.
    if (!(dgts[0] == 10 - n))
        write(1, ", ",2);
}

void ft_print_combn(int n)
{
	// create a char array of 9 position.
    char dgts[9];
    int i;

    // init each postion until the end of the array applying the rule: ary[i] < ary[i+1] 
    i = 0;
    while (i < n)
    {
        dgts[i] = '0' + i;
        i++;
    }
    // find all the possible comb 

    //main loop 
    i = 1;
    while (n - i >= 0)
    {
        while((dgts[n - i] <= '9') && (dgts[n - i ] > dgts[n - i - 1] ))// ?how about the first digit, it will go out of bound
        {
            ft_putstr(n , dgts);
            dgts[n - i]++;
        }
        i++;
    }




}

int	main(void)
{
	ft_print_combn(2);
	return (0);
}
