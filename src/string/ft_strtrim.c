#include "libft.h"

/*
 ** Allocates and returns a copy of the string s1 without the caracters
 ** specified in the set at the beginning and the end of the string.
 ** Returns NULL on error.
*/

char *ft_strtrim(char const *s1, char const *set)
{
    size_t len;

    if (!s1 || !set)
        return (NULL);
    while (*s1 && ft_strchr(set, *s1))
        ++s1;
    len = ft_strlen(s1);
    while (len && ft_strchr(set, s1[len]))
        --len;
    return (ft_substr((char *)s1, 0, len + 1));
}