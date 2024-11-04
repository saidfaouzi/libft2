#include "libft.h"

int ft_lstsize(t_list *lst)
{
    t_list *count;
    int i;

    i = 0;
    count = lst;
    while(count != NULL)
    {
        i++;
        count = count->next;
    }
return (i);
}