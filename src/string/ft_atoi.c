#include "libft.h"

/*
 ** Converts the string pointed to by str to int representation.
*/

int     ft_atoi(const char *str)
{
    int signe;
    int res;

    signe = 1;
    res = 0;
    while (*str && ((*str >= '\t' && *str <= '\r') || (*str == ' ')))
        str++;
    if (*str == '-' || *str == '+')
    {
        if (*str == '-')
            signe = -1;
        ++str;
    }
    while (*str && ft_isdigit(*str))
    {
        res = res * 10 + *str - '0';
        ++str;
    }
    return (res * signe);
}