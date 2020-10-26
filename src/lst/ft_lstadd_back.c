#include "libft.h"

/*
 ** Adds the element new at the end of the list.
*/

void ft_lstadd_back(t_list **alst, t_list *new)
{
    t_list *tmp;

    tmp = *alst;
    if (!tmp)
        *alst = new;
    else
    {
        while (tmp->next)
            tmp = tmp->next;
        tmp->next = new;
    }
}