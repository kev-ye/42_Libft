#include "libft.h"

/*
 ** Appends string src to the end of dst.
 ** It will append at most dstsize - strlen(dst) - 1 characters.
*/

size_t  ft_strlcat(char *dst, const char *src, size_t dstsize)
{
    size_t len_d;
    size_t len_s;

    len_d = 0;
    while (dst[len_d] && len_d < dstsize)
        ++len_d;
    if (len_d == dstsize)
        return (ft_strlen(src) + len_d);
    dst += len_d;
    len_s = 0;
    while (src[len_s])
    {
        if (len_s < dstsize - len_d - 1)
            *dst++ = src[len_s];
        ++len_s;
    }
    *dst = '\0';
    return (len_s + len_d);
}