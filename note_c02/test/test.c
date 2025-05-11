# include <stdio.h>
# include <string.h>
# include <unistd.h>
# include <ctype.h>

int     main()
{
    int a = 500;
    write(1, &a, sizeof(a));
    return (0);
}

