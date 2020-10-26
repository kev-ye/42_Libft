#include "libft.h"

/*
 ** Compares not more than n characters.
*/

int     ft_strncmp(const char *s1, const char *s2, size_t n)
{
    while ((*s1 || *s2) && (*s1 == *s2) && --n)
    {
        ++s1;
        ++s2;
    }
    return (n ? (unsigned char)*s1 - (unsigned char)*s2 : 0);
}