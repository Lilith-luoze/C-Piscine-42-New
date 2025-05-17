# include <unistd.h>
# include <string.h>
# include <stdio.h>




char	*ft_strcpy(char *dest, char *src)
{
	char	*ori_dest;

	ori_dest = dest;
	while (*src)
	{
		*dest = *src;   // because I didn't put \0? yes!
		dest++;
		src++;
	}
	*dest = '\0';
	return (ori_dest);
}

int main()
{
    char dest_ft[100];
    char dest_builtin[100];
    char *src = "try this one  (";
    ft_strcpy(dest_ft, src);
    strcpy(dest_builtin, src);
    printf("%s\n",dest_ft);
    printf("%s\n",dest_builtin);
    return (0);

}

