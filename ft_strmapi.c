#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    int len;
    int i;
    char *str;

    if(!s || !f)
        return (NULL);
    len = ft_strlen((char *)s);
    i = 0;
    str = malloc(len + 1);
    while(i < len)
    {
        str[i] = (*f)(i, s[i]);
        i++;
    }
    str[len] = '\0';
    return (str);
}