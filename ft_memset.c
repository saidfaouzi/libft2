#include <stddef.h>

void *ft_memset(void *s, int c, size_t n)
{
    size_t i;
    unsigned char *ptr;

    i = 0;
    ptr = s;
    while(i < n)
    {
        ptr[i] = c;
        i++;
    }
    return (s);
}