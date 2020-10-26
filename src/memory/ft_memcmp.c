#include "libft.h"

/*
 ** Compares n bytes of s1 and s2 (each interpreted as unsigned char). 
*/

int     ft_memcmp(const void *s1, const void *s2, size_t n)
{
    const unsigned char *tmp1;
    const unsigned char *tmp2;

    tmp1 = s1;
    tmp2 = s2;
    while (n--)
    {
        if (*tmp1 != *tmp2)
            return (*tmp1 - *tmp2);
        ++tmp1;
        ++tmp2;
    }
    return(0);
}