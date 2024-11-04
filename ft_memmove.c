#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
    size_t i;

    i = n;
    if (src < dest && dest < src + n)
    {
        while (i > 0)
        {
            ((unsigned char *)dest)[i - 1] = ((const unsigned char *)src)[i - 1];
            i--;
        }
    }
    else
        ft_memcpy(dest, src, n);
    return (dest);
}