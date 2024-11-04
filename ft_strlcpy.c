#include "libft.h"

size_t ft_strlcpy(char *dst, const char *src, size_t size)
{
    size_t i;
    int j;

    i = 0;
    j = ft_strlen((char *)src);
    while (i < size)
    {
        if (i < size - 1)
            dst[i] = src[i];
        else if (i == size - 1)
            dst[i] = '\0';
        else if (src[i + 1] == '\0')
            dst[i + 1] = '\0';
        i++;
    }
    return (j);
}