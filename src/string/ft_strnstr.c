#include "libft.h"

/*
 ** Locates the first occurrence of the null-terminated string needle
 ** in the string haystack, where not more than len characters are searched.
*/

char    *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t pos;
    size_t i;

    if (!*needle)
        return ((char *)haystack);
    pos = 0;
    i = 0;
    while (*haystack && *(haystack + pos) && pos < len)
    {
        if (*(haystack + pos) == *needle)
        {
            while ((*(haystack + pos + i) == *(needle + i)) && (pos + i) < len)
           {     
               ++i;
               if (!*(needle + i))
                    return ((char *)(haystack + pos));
           }
        }
        ++pos;
    }
    return (NULL);
}