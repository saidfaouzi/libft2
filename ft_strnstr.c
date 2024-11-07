/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfaouzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 11:58:04 by sfaouzi           #+#    #+#             */
/*   Updated: 2024/11/06 11:58:04 by sfaouzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	j = 0;
	i = 0;
	if (little[0] == '\0')
		return ((char *)big);
	while (i < len)
	{
		j = 0;
		while (big[i] == little[j] && little[j] && i < len)
		{
			i++;
			j++;
		}
		if (little[j] == '\0')
			return ((char *)&big[i - ft_strlen((char *)little)]);
		i++;
	}
	return (0);
}
/*#include <string.h>
#include <stdio.h>

int	main(void)
{
// char	src[] = "said";
// 	char dst[6];
// 	ft_strlcpy(dst,src,5);
// 	printf("%s\n", dst);
// 	char src1[] = "said";
// 	char dst1[6];
// 	strlcpy(dst1,src1,5);
// printf("%s\n", dst1);
char	big[] = "aaaaaac";
char	litle[] = "aaaaaac";
printf("%s\n",ft_strnstr(big, litle, 7));
}*/
