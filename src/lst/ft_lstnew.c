#include "libft.h"

/*
 ** Allocates and returns a new element.
 ** Returns NULL on error.
*/

t_list *ft_lstnew(void *content)
{
    t_list *new;

    if ((new = (t_list *)malloc(sizeof(t_list))))
    {
        new->content = content;
        new->next = NULL;
    }
    return (new);
}