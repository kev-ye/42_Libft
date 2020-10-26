#include "libft.h"

/*
 ** Checks if the character c is printable.
*/

int     ft_isprint(int c)
{
    return (c >= 32 && c <= 126);
}