# include <unistd.h>

int    main(int argc , char *arg[])
{
    int i;
    i = 0;
    while (arg[0][i])
    {
        write(1, (*arg)+i , 1);
        i++;
    }
    write(1, "\n", 1);
    if (argc)
        return(0);
}