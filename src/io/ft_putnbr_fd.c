#include "libft.h"

/*
 ** Outputs the integer n to given file descriptor.
*/

void ft_putnbr_fd(int n, int fd)
{
    unsigned int nbr;

    if (n < 0)
    {
        ft_putchar_fd('-', fd);
        nbr = -(unsigned int)n;
    }
    else
        nbr = (unsigned int)n;
    if (nbr > 9)
        ft_putnbr_fd(nbr / 10, fd);
    ft_putchar_fd(nbr % 10 + '0', fd);
}