#include "libft.h"

/*
 ** Copies bytes from string src to string dst.
 ** If the character c occurs in the string src, the copy stops and a pointers
 ** to the byte after the copy of c in the string dst is returned.
 ** Otherwise, n bytes are copied, and a NULL pointer is returned.
*/

void    *ft_memccpy(void *dst, const void *src, int c, size_t n)
{
    unsigned char *d;
    const unsigned char *s;

    d = dst;
    s = src;
    while (n--)
    {
        if ((*d++ = *s++) == (unsigned char)c)
            return (d);
    }
    return (NULL);
}