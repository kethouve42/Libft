/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kethouve <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 10:49:27 by kethouve          #+#    #+#             */
/*   Updated: 2023/10/09 14:31:53 by kethouve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	dst_len;
	size_t	src_len;

	i = 0;
	j = 0;
	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (dst_len > size || size == 0)
		return (src_len + size);
	while (dst[i] != '\0' && i < size)
		i++;
	if (dst_len < size)
	{
		while (j + i < size - 1 && src[j] != '\0')
		{
			dst[i + j] = src[j];
			j++;
		}
	}
	dst[i + j] = '\0';
	return (src_len + dst_len);
}
