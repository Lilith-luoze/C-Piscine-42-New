# include <string.h>
# include <stdio.h>

//this is a pain.

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

char *ft_strstr(char *str, char *to_find)
{
    // char *ori_str;
    // char *ori_to_find;
    unsigned int len_find;
    unsigned int i;
    unsigned int j;
    i = 0;
    len_find = lili_strlen(to_find);

    if (*to_find == '\0')
        return (str);  
    
    j = 0;
    while (str[i])//to the end of str
    {   
        
        while (str[i] && to_find[j] && str[i] == to_find[j] ) //to the end of to_find (good) or dif or the end of str
        {   
            i++;
            j++;
        }
        if ( j == len_find)
            return (str + i - len_find); //check -1 or not; 
        else 
            j = 0;         
        if ( str[i] == to_find[j] )
    }


    return (NULL)
    return (<the ptr to the first occurence);

}

int main()
{
    char s1[100] = "am i ";
    char *s2 = "fool or smart? ";
    char s3[100] = "am i ";
    unsigned int nb = 4;

    printf("%s\n", ft_strncat(s1 , s2, nb));
    printf("%s\n", strncat(s3 , s2, nb));
    

    return (0);
}