#include <stddef.h>

void *ft_memcpy(void *dest, const void *src, size_t n)
{
    size_t i;
    char *ptr;
    const char *ptr2;

    i = 0;
    ptr = dest;
    ptr2 = src;
    while(i < n)
    {
        ptr[i] = ptr2[i];
        i++;
    }
    ptr[i] = '\0';
    return (ptr);
}