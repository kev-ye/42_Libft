#include "libft.h"

/*
 ** Deletes and frees the given element and every successor of that element,
 ** using the function del and free.
*/

void ft_lstclear(t_list **lst, void (*del)(void *))
{
    t_list *tmp;

    tmp = NULL;
    while (*lst)
    {
        tmp = (*lst)->next;
        ft_lstdelone(*lst, del);
        *lst = tmp;
    }
    *lst = NULL;
}