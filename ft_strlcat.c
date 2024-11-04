#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
    int i;
    size_t lend;
    size_t lens;
    int result;

    lend = ft_strlen((char *)dst);
    result = lend;
    lens = ft_strlen((char *)src);
    i = 0;
    if (size <= lend)
        return (size + lens);
    else
    {
        while (lend < size)
        {
            if (lend < size - 1)
                dst[lend] = src[i];
            else if (lend == size - 1)
                dst[lend] = '\0';
            i++;
            lend++;
        }
    }
    return (result + ft_strlen((char *)src));
}
