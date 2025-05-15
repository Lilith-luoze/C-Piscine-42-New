# include <string.h>
# include <stdio.h>

//A bit complicated

unsigned int  lili_strlen(char *str)
{
    unsigned int i;
    i = 0;
    while (*str)
    {
        str++;
        i++;
    }
    return (i);
}
char *lili_check_same(char *str, char *to_find)
{
    //check starting from str
    while (*str && *to_find && *str == *to_find)
    {
        str++;
        to_find++;
    }
    return (to_find);
}

char *ft_strstr(char *str, char *to_find)
{
    unsigned int len_find;
    unsigned int i;
    char *result;

    i = 0;
    if (*to_find == '\0')
        return (str);   
    len_find = lili_strlen(to_find);
    // result is the first diff pointer or pointer to \0, if it - (str+i) == len_find, then we find it no matter what.
    while (str[i])//to the end of str
    {   
        if (str[i] == to_find[0])
        {
            result = lili_check_same(str+i, to_find);
            if (*result == '\0' )
                return (str+i); //found it. len_
            i = i + (result - to_find);
        }
        else 
            i++;
    }
    return (NULL);
}

// int main()
// {
//     char *to_find = "f";
//     char *src = "am i fool or smart? ";

//     printf("%s\n", ft_strstr(src , to_find));
//     printf("%s\n", strstr(src , to_find));
    

//     return (0);
// }