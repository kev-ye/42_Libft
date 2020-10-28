#include "libft.h"

/*
 ** copies len bytes from src to dst.
 ** The two strings may overlap.
 ** The copy is always done in a non-destructive manner.
*/

void    *ft_memmove(void *dst, const void *src, size_t len)
{
    unsigned char *d;
    const unsigned char *s;

    if (!dst && !src)
        return (NULL);
    if (dst < src)
        ft_memcpy(dst, src, len);
    else
    {
        d = dst + len;
        s = src + len;
        while (len--)
            *--d = *--s;
    }
    return (dst);
}