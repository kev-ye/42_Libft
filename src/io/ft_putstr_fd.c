#include "libft.h"

/*
 ** Outputs the string s to given file descriptor.
*/

void ft_putstr_fd(char *s, int fd)
{
    write(fd, s, ft_strlen(s));
}