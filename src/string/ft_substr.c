#include "libft.h"

/*
 ** Allocates and returns a substring from the string s.
 ** The substring begins at index start and has a maximum size of len.
 ** Returns NULL on error.
*/

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *str;
    size_t len_s;
    size_t i;

    if (!s)
        return (NULL);
    len_s = ft_strlen(s);
    if (len_s < start)
    {
        str = ft_strdup("");
        return (str);
    }
    if (!(str = (char *)malloc(sizeof(char) * (len + 1))))
        return (NULL);
    i = 0;
    while (s[start + i] && len--)
    {
        str[i] = s[start + i];
        ++i;
    }
    str[i] = '\0';
    return (str);
}