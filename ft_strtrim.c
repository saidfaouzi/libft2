#include "libft.h"

static int ft_start(char *s1, char *s2)
{
    int i;
    int j;
    int len;

    i = 0;
    len = ft_strlen((char *)s1);
    while (i < len)
    {
        j = 0;
        while (s2[j])
        {
            if (s1[i] == s2[j])
                break;
            j++;
        }
        if (s2[j] == '\0')
            break;
        i++;
    }
    return (i);
}
static int ft_end(char *s1, char *s2)
{
    int len;
    int j;

    len = ft_strlen((char *)s1);
    while (len > 0)
    {
        j = 0;
        while (s2[j])
        {
            if (s1[len - 1] == s2[j])
                break;
            j++;
        }
        if (s2[j] == '\0')
            break;
        len--;
    }
    return (len);
}

char *ft_strtrim(char const *s1, char const *set)
{
    int i;
    int j;
    int len;
    char *str;
    int s;

    i = ft_start((char *)s1, (char *)set);
    len = ft_end((char *)s1, (char *)set);
    s = len - i;
    if(s < 0)
        s = 0;
    str = malloc((s + 1) * sizeof(char));
    if(str == NULL)
        return (NULL);
    j = 0;
    s = i;
    while (j < (len - s))
    {
        str[j] = s1[i];
        j++;
        i++;
    }
    str[j] = '\0';
    return (str);
}