#include "libft.h"

char *ft_strdup(const char *s)
{
    char *str;
    int i;

    i = 0;
    str = malloc(ft_strlen((char *)s) + 1);
    if(str == NULL)
        return (NULL);
    while(s[i])
    {
        str[i] = s[i];
        i++;
    }
    str[i] = '\0';
return (str);
}