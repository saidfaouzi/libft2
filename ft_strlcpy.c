/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfaouzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 11:58:04 by sfaouzi           #+#    #+#             */
/*   Updated: 2024/11/06 11:58:04 by sfaouzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	int		j;

	j = ft_strlen((char *)src);
	i = 0;
	if (src[i] == '\0')
	{
		dst[i] = '\0';
		return (j);
	}
	while (i < size && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[size] = '\0';
	return (j);
}
/*#include <string.h>
#include <stdio.h>

int	main(void)
{
char	src[] = "said";
	char dst[6];
	ft_strlcpy(dst,src,5);
	printf("%s\n", dst);
	char src1[] = "said";
	char dst1[6];
	strlcpy(dst1,src1,5);
printf("%s\n", dst1);
}*/