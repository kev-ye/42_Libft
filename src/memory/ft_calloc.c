#include "libft.h"

/*
 ** Allocates enough space for count objects that are size bytes of memory
 ** each and returns a pointer to the allocated memory. 
 ** The allocated memory is filled with bytes of value zero.
 ** Returns a NULL pointer if there is an error.
*/

void    *ft_calloc(size_t count, size_t size)
{
    void *ptr;

    if(!(ptr = (void *)malloc(count * size)))
        return (NULL);
    ft_bzero(ptr, count * size);
    return (ptr);
}
