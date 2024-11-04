#include "libft.h"

int ft_isalnum(int c)
{
    if (ft_isalpha(c) == 1024 || ft_isdigit(c) == 2048)
        return (1);
    return (0);
}