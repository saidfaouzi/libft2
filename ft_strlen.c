#include <stddef.h>

size_t ft_strlen(char *c)
{
    int i;

    i = 0;
    while(c[i])
        i++;
    return (i);
}