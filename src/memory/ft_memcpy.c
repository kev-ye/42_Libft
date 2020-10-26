#include "libft.h"

/*
 ** Copies n bytes from src to dst.
 ** If dst and src overlap, behavior is undefined.
*/

void    *ft_memcpy(void *dst, const void *src, size_t n)
{
    unsigned char *d;
    const unsigned char *s;

    d = dst;
    s = src;
    while (n--)
        *d++ = *s++;
    return (dst);
}