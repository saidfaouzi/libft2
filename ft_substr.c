/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfaouzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 11:58:04 by sfaouzi           #+#    #+#             */
/*   Updated: 2024/11/06 11:58:04 by sfaouzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;

	i = 0;
	if (len >= ft_strlen((char *)s) + 1 || len + start >= ft_strlen((char *)s)
		+ 1)
		len = ft_strlen((char *)s) - start + 1;
	else
		len = len + 1;
	str = malloc(len);
	if (str == NULL || start > ft_strlen((char *)s))
		return (NULL);
	while (i < len - 1)
	{
		str[i] = s[start];
		start++;
		i++;
	}
	str[i] = '\0';
	return (str);
}
