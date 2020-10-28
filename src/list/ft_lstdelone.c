#include "libft.h"

/*
 ** Takes as a parameter an element and frees the memory of the element's
 ** content using the function del given as a parameter.
*/

void ft_lstdelone(t_list *lst, void (*del)(void *))
{
    if (lst)
    {
        if (del)
            (del)(lst->content);
        free(lst);
    }
}