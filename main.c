/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfaouzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 11:58:04 by sfaouzi           #+#    #+#             */
/*   Updated: 2024/11/06 11:58:04 by sfaouzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <ctype.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

char	uppercase_and_append_index(unsigned int i, char c)
{
	if (c && ft_isalpha(c))
	{
		c = ft_toupper(c) + 1;
	}
	return (c);
}
int	main(void)
{
	char	s[] = "said";
	char	s1[] = "faouzi";

	// printf("ft_isalpha %d\n", ft_isalpha('f'));
	// printf("ft_isdigit %d\n", ft_isdigit(5));
	// printf("ft_isalnum %d\n", ft_isalnum(5));
	// printf("ft_isascii %d\n", ft_isascii('"'));
	// printf("ft_isprint %d\n", ft_isprint('f'));
	// printf("ft_strlen %d\n", ft_strlen("youness"));
	// int a;
	// void *p = ft_memset(&a, 65, 4);
	// for (int i = 0 ; i < 8 ;p++)
	// {
	//     printf("%p \n", p);
	//     i++;
	// }
	// char h;
	// int buffer[5];
	// ft_memset(buffer, 'A', sizeof(buffer)); // Fill buffer with 'A'
	// for (int i = 0; i < 5; i++) {
	//     printf("buffer[%i] = %c\n", i,buffer[i]);
	// }
	// ft_memset(&a, 0, 4);
	// ft_memset(&a, 0, 3);
	// ft_memset(&a, 0, 2);
	// ft_memset(&a, 255, 1);
	// printf("%d\n", a);
	// write(1, &a, 1);
	// printf("\n");
	// printf("%i", ft_memset(&a, 152, 4));
	// char str[]= "jyhfd";
	// bzero(str+3, 2);
	// printf("\n");
	// char str1[]= "jyhfd";
	// ft_bzero(str1+3, 2);
	// printf("%s hhh%s", str, str1);
	//     int i = 0;
	//     int dest[5];
	//     int src[] = {554355,2,1,5,4};
	//     printf("%p\n", memcpy(dest, src,20));
	//     while(i < 5)
	//     {
	//         printf("%d, ", dest[i
	//         printf("%d, ", dest[i]);
	//         i++;
	//     }
	//     printf("\n");
	//     printf("-------------------------------\n");
	//     int dest1[5];
	//     int src1[]= {554355,2,1,5,4};
	//     printf("%p\n", ft_memcpy(dest1, src1, 20));
	//     i = 0;
	//    while(i < 5)
	//     {
	//         printf("%d, ", dest1[i]);
	//         i++;
	//     }
	//     printf("\n");
	// int str[] = {0,2,2};
	// int x = 1;
	// ft_memset(str, x, 5);
	// x = 0;
	// while(x < 3)
	// {
	// printf("%d\n", str[x]);
	// x++;
	// }
	// size_t n = 4;
	// char src[] = "said faouzi";
	// memcpy(src + 1, src, n);
	// printf("%s\n", src);
	// printf("------------------------------\n");
	// n = 4;
	// char src1[] = "said faouzi";
	// ft_memcpy(src1 + 1, src1, n);
	// printf("%s\n", src1);
	// char src[10] = "abcd";
	// char dest[10] = "12345";
	// //ft_strlcat(dest, src, 5);
	// int i = ft_strlcpy(dest, src, 0);
	// printf("%s\n", dest);
	// printf("%d\n", i);
	// printf("\n");
	// char fsrc[10] = "abcd";
	// char fdest[10] = "12345";
	// //ft_strlcat(dest, src, 5);
	//  i = strlcpy(fdest, fsrc, 0);
	// printf("%s\n", fdest);
	// printf("%d\n", i);
	// printf("%c\n", ft_tolower(5));
	// char s[] = "siaid";
	// int c = 'f';
	// printf("%s\n",ft_strrchr(s,c));
	// char s2[] = "said";
	// printf("%d\n",ft_strncmp(s1, s2, 5));
	// char str[] = "said";
	// printf("%s   dyali  \n", ft_memchr(str,'i', 4));
	// printf("%s   dyalhom hh \n", memchr(str,'i', 4));
	// char s1[] = "sAid";
	// char s2[] = "sAiD";
	// printf("%i\n", ft_memcmp(s1, s2, 5));
	// printf("%i\n", memcmp(s1, s2, 5));
	// char big[] = "faouzikamalahmedkamalahmersaid";
	// char little[] = "ahmer";
	// printf("%s\n", ft_strnstr(big, little, 31));
	// char atoii[] = "+1234254384138";
	// printf("%i\n", ft_atoi(atoii));
	// int i = 0;
	// int *str;
	// str = calloc(0, 0);
	// while(i < 5)
	// {
	//     printf("%i", str[i]);
	//     i++;
	// }
	// printf("\n");
	// i = 0;
	// int *str1;
	// str1 = ft_calloc(0, 0);
	// while(i < 5)
	// {
	//     printf("%i", str1[i]);
	//     i++;
	// }
	// printf("\n");
	// char str[] = "kjdhgvb";
	// ft_strdup(str);
	// printf("%s\n",  ft_strdup(str));
	// char str1[] = "kjdhgvb";
	// printf("%s\n", strdup(str1));
	// char str[] = "saidfaouzi";
	// printf("%s\n",ft_substr(str, 2,2));
	// char s1[] = "sssxyzssssssssxcvbnmssssssssss";
	// char s2[] = "said";
	// printf("%s\n", ft_strtrim(s1, s2));
	// char *str = " sa c id c aid cccccccc sai c oh c";
	// char **str1 = ft_split(str, 'c');
	// int j;
	// int i = 0;
	// while(str1[i][j])
	// {
	//     j = 0;
	//     while(str1[i][j])
	//     {
	//         write(1, &str1[i][j], 1);
	//         j++;
	//     }
	//     write(1, "\n", 1);
	//     i++;
	// }
	// int i = 0;
	// printf("%s\n", ft_itoa(i));
	// int i = 400;
	// int j = 2;
	// int k = 0;
	// while (j > 0)
	// {
	//     ft_memset(&i, k, j);
	//     k++;
	//     j--;
	// }
	// printf("%i\n", i);
	// char *str = "said";
	// printf("%i\n", ft_strlen(str));
	// void ff(unsigned int i, char c)
	// {
	//     if (c >= 97 && c <= 122)
	//         c -= 32;
	//     else if (c >= 65 && c <= 90)
	//         c += 32;
	//     return (c);
	// }
	// char *s = "saidDDD";
	// char str[] = "abcd";
	// printf("Original string: %s\n", str);
	// Test ft_striteri
	// printf("%s\n", ft_strmapi(str,uppercase_and_append_index));
	// printf("Modified string: %s\n", str);
	// char s[] = "said";
	// ft_putendl_fd(s, 1);
	// ft_putnbr_fd(10, 1);
	// printf("\n");
	// char s[] = "sasa";
	// char s1[] = "sa";
	// printf("%s\n", ft_strtrim(s, s1));
	// char string[] = "a a a a a ";
	// char **str = ft_split(string, ' ');
	// int i = 0;
	// int j = 0;
	// while(i < 6)
	// {
	//     j = 0;
	//     while(str[i][j])
	//     {
	//         write(1, &str[i][j], 1);
	//         j++;
	//     }
	//     printf("\n");
	//     i++;
	// }
	// int a = 5;
	// int b = 6;
	// int c = 7;
	// int d = 8;
	// ft_lstnew(&d);
	// ft_lstnew(&b);
	// ft_lstnew(&c);
	// ft_lstnew(&d);
	// printf("%d\n", *(int *)ft_lstnew(&a)->content);
	// printf("%d\n", *(int *)ft_lstnew(&b)->content);
	// printf("%d\n", *(int *)ft_lstnew(&c)->content);
	// printf("%d\n", *(int *)ft_lstnew(&d)->content);
	printf("%s\n", ft_memcpy(s1, s, 2));
	printf("%s\n", memcpy(s1, s, 2));
}
