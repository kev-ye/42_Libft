#include "libft.h"

/*
 ** Checks if the character c is ASCII.
*/

int     ft_isascii(int c)
{
    return (c >= 0 && c <= 127);
}