#include "libft.h"

/*
 ** Returns tne last element of the list.
*/

t_list *ft_lstlast(t_list *lst)
{
    if (lst)
        while (lst->next)
            lst = lst->next;
    return (lst);
}