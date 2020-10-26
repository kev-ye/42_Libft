#include "libft.h"

/*
 ** Checks if the character c is alphanumeric.
*/

int     ft_isalnum(int c)
{
    return (ft_isalpha(c) || ft_isdigit(c));
}