#include "libft.h"

/*
 ** Computes the length of s.
*/

size_t  ft_strlen(const char *s)
{
    const char *str;

    str = s;
    while (*str)
        ++str;
    return (str - s);
}