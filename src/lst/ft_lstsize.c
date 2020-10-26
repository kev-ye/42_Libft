#include "libft.h"

/*
 ** Counts the number of elements int a list.
*/

int ft_lstsize(t_list *lst)
{
    int count;

    count = 0;
    while (lst)
    {
        ++count;
        lst = lst->next;
    }
    return (count);
}