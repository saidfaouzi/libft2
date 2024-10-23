#include <stddef.h>

void *ft_memmove(void *dest, const void *src, size_t n)
{
    size_t i;
    char *ptr;
    const char *ptr1;

    i = 0;
    ptr = dest;
    ptr1 = src;
    while(i < n)
    {
        ptr[i] = ptr1[i];
        i++;
    }
    return (dest);
}