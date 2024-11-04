#include "libft.h"

char *ft_strnstr(const char *big, const char *little, size_t len)
{
    size_t i;
    size_t j;

    j = 0;
    i = 0;
    if (little[0] == '\0')
        return ((char *)big);
    while (i < len)
    {
        j = 0;
        while (big[i] == little[j] && little[j] && i < len)
        {
            i++;
            j++;
        }
        if (little[j] == '\0')
            return ((char *)&big[i - ft_strlen((char *)little)]);
        i++;
    }
    return (0);
}