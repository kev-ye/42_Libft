#include "libft.h"

/*
 ** Adds the element new at the beginning of the list
*/

void ft_lstadd_front(t_list **alst, t_list *new)
{
    if (*alst)
        new->next = *alst;
    *alst = new;
}