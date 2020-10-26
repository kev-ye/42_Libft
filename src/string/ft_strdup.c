#include "libft.h"

/*
 ** Allocates sufficient memory for a copy of the string s1, 
 ** does the copy, and returns a ponter to it.
 ** Returns a NULL pointer if there is an error.
*/

char    *ft_strdup(const char *s1)
{
    char *str;
    size_t len;

    len = ft_strlen(s1) + 1;
    if (!(str = (char *)malloc(sizeof(char) * len)))
        return (NULL);
    return ((char *)ft_memcpy(str, s1, len));
}