#include "libft.h"

/*
 ** Converts lowercase letters to uppercase letters.
*/

int     ft_toupper(int c)
{
    return ((c >= 97 && c <= 122)? c - 32 : c);
}