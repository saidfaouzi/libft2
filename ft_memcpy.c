#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
    if (!dest && !src)
        return NULL;
    size_t i;

    i = 0;
    while (i < n)
    {
        ((unsigned char *)dest)[i] = ((const unsigned char *)src)[i];
        i++;
    }
    return (dest);
}