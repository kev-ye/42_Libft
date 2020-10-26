#include "libft.h"

/*
 ** Iterates the lst and applies the function f to the content of each element.
*/

void ft_lstiter(t_list *lst, void (*f)(void *))
{
    while (lst)
    {
        if (f)
            (f)(lst->content);
        lst = lst->next;
    }
}