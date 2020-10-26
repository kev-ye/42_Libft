#include "libft.h"

/*
 ** Allocates and returns a new string.
 ** Result of concatenation of s1 and s2.
 ** Returns NULL on error.
*/

char *ft_strjoin(char const *s1, char const *s2)
{
    char *str;
    size_t len;
    int i;

    if (!s1 || !s2)
        return (NULL);
    len = ft_strlen(s1) + ft_strlen(s2);
    if (!(str = (char *)malloc(sizeof(char) * (len + 1))))
        return (NULL);
    i = 0;
    while (*s1)
        str[i++] = *s1++;
    while (*s2)
        str[i++] = *s2++;
    str[i] = '\0';
    return (str);
}