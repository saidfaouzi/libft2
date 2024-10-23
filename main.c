#include "Libft.h"
#include <stdio.h>
#include <stddef.h>

int main()
{
    // printf("ft_isalpha %d\n", ft_isalpha('f'));
    // printf("ft_isdigit %d\n", ft_isdigit(5));
    // printf("ft_isalnum %d\n", ft_isalnum('c'));
    // printf("ft_isascii %d\n", ft_isascii('"'));
    // printf("ft_isprint %d\n", ft_isprint('f'));
    // printf("ft_strlen %d\n", ft_strlen("youness"));
    // int arr[6] = {2,1,4,1,5,4};uness"));
    // int arr[6] = {2,1,4,1,5,4};
    // ft_memset(arr, 48, 16);
    // int i;
    // i = 0; 
    // while (i < 6)
    // {
    //     printf("%c, \n", arr[i]);
    //     i++;
    // }
    // char srr[] = "jhgsykasgu";
    // printf("%s \n", "karuygi");
    // ft_bzero(srr,3);
    // int j = 0;
    // while(srr[i] != 'u')
    // {
    //     printf("%c",srr[j]);
    //     j++;
    // }
    char dest[] = "said";
    const char src[] = "hh";
    //printf("%s \n",(char *)ft_memcpy(dest, src, 5));

    printf("%s\n", (char *)ft_memmove(dest, src, sizeof(src)));

}