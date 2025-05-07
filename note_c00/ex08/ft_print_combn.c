#include <unistd.h>

void	ft_prt_chararray(int n, char *dgts)
{
    // print out the array using write (loop, n) > (one function for print out the array)

	int	i;

	i = 0;
	while (i < n)
        write(1, &dgts[i], 1);
    // add the comma
    if (!(dgts[0] == 10 - n))
        write(1, ", ",2);
}

void ft_print_combn(int n)
{
	// create a char array of n size.
    char dgts[n];
    int i;
    // init each postion until the end of the array: ary[1] < ary[2] ...
    i = 0;
    while (i < n)
    {
        dgts[i] = '0' + i;
        i++;
    }
    // how to increment things with uncertain digits? the code?
    i = 1;
    while ( dgts dgts[n-i] <= '9')
    while (dgts[n-i] <= '9')
    {
        ft_prt_chararray(n , dgts);
        dgts[n-i]++;
    }
    i++;



}

int	main(void)
{
	ft_print_combn(2);
	return (0);
}
