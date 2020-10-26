#include "libft.h"

/*
 ** Applies the function f to each character of the string passed as argument
 ** to create a new string resulting from successive applications of f.
*/

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    char *str;
    unsigned int len;

    if (!s)
        return (NULL);
    len = ft_strlen(s);
    if (!(str = (char *)malloc(sizeof(char) * (len + 1))))
        return (NULL);
    str[len] = '\0';
    while (len--)
        str[len] = (f)(len, s[len]);
    return (str);
}