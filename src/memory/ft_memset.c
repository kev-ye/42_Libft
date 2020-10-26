#include "libft.h"

/*
 ** Writes len of c to b.
*/

void    *ft_memset(void *b, int c, size_t len)
{
    while (len)
        ((unsigned char*)b)[--len] = (unsigned char)c;
    return (b);
}