#include "libft.h"

/*
 ** Converts uppercase letters to lowercase letters.
*/

int     ft_tolower(int c)
{
    return ((c >= 65 && c <= 90)? c + 32 : c);
}