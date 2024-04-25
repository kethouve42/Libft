/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kethouve <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 10:33:21 by kethouve          #+#    #+#             */
/*   Updated: 2023/10/13 11:14:43 by kethouve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t		i;
	char		*o;

	i = 0;
	while (i < n)
	{
		if (((char *)s)[i] == (char)c)
		{
			o = &((char *)s)[i];
			return (o);
		}
		i++;
	}
	return (NULL);
}
