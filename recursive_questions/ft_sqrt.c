# include <stdio.h>
//always use helper function for help!
int lilith_sqrt_helper(int nb , int tryout_sqrt)
{
    if (tryout_sqrt * tryout_sqrt > nb)
        return (0);
    if (tryout_sqrt * tryout_sqrt == nb)
        return(tryout_sqrt);
    return (lilith_sqrt(nb , tryout_sqrt + 1));
}

int ft_sqrt(int nb)
{
    
    if (nb == 1)
        return (1);

    return (lilith_sqrt(nb, 1));
}


int main()
{
    printf("%i", ft_sqrt(225));
    
    return (0);
}