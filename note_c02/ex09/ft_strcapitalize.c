# include <stdio.h>
# include <string.h>
# include <unistd.h>
#include <ctype.h>

char *ft_strcapitalize(char *str)
{
    //  modify in-place
    //  I thought it would be hard for lower letters in a word other than the first capital one. But then you just simply use filtering (invented by me..)
    int i;
    i = 0;

    if ( i == 0 &&  (str[i] >= 'a' && str[i] <= 'z' ) ) // capi the head in place i== 0; do this to avoid access out of bound
        str[i] = str[i] - ('z' - 'Z');
    i++;
    // word : !((str[i-1] >= 'A' && str[i-1] <= 'Z' ) || (str[i-1] >= 'a' && str[i-1] <= 'z' ) || (str[i] >= '0' && str[i] <= '9' ))
    while(str[i])
    {
        //i >= 1
        if (!((str[i-1] >= 'A' && str[i-1] <= 'Z' ) || (str[i-1] >= 'a' && str[i-1] <= 'z' ) || (str[i] >= '0' && str[i] <= '9' )) && (str[i] >= 'a' && str[i] <= 'z'))
            //this is normal case for modify for head -- capi
            str[i] = str[i] - ('z' - 'Z');
        else if (str[i] >= 'A' && str[i] <= 'Z') //you don't need to care about other cases. as this is "2nd opiton for one specific position"
            str[i] = str[i] + ('z' - 'Z');
        i++;
    }
    ///////
    return (str);
}



// int main()
// {

//     char str[] = "hi, how are you? 42words forty-two; fifty+and+one";

//     printf("%s", ft_strcapitalize(str));

//     return (0);

// }
