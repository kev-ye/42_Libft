#include "libft.h"

/*
 ** Locates the last occurrence if c (converted to a char) in the string
 ** pointed to by s. The terminating null character is considered to be part
 ** of the string; therefore if c is '\0', the functions locate
 ** the terminating '\0'.
*/

char    *ft_strrchr(const char *s, int c)
{
    size_t len;

    len = ft_strlen(s) + 1;
    while (len--)
        if (s[len] == (char)c)
            return ((char*)(s + len));
    return (NULL);
}