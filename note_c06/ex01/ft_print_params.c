# include <unistd.h>

int    main(int argc , char *arg[])
{
    int i;
    int j;
    i = 1;

    while (i < argc)
    {
        j = 0;
         while (arg[i][j])
        {
            write(1, *(arg+i)+j , 1);
            j++;
        }
        write(1, "\n", 1);
        i++;
    }
}