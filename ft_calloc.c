#include "libft.h"

void *ft_calloc(size_t nmemb, size_t size)
{
    void *callo;
    size_t nombre;
    nombre = nmemb * size;
    callo = malloc(nombre);
    if(callo == NULL)
        return (NULL);
    ft_memset(callo, 0, nombre);
    return (callo);
}