#include "libft.h"

/*
 ** Writes n zeroed bytes to s.
*/

void    ft_bzero(void *s, size_t n)
{
    while (n)
        ((unsigned char*)s)[--n] = 0;
}