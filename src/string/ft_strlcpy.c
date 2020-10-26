#include "libft.h"

/*
 ** Copy up to dstsize - 1 characters from the string src to dst,
 ** NUL-terminating the result if dstsize is not 0.
*/

size_t  ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
    size_t len;

    len = ft_strlen(src);
    if (len + 1 < dstsize)
        ft_memcpy(dst, src, len + 1);
    else if (dstsize)
    {
        ft_memcpy(dst, src, dstsize - 1);
        dst[dstsize - 1] = '\0';
    }
    return (len);
}