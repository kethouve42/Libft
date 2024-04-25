/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kethouve <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 11:00:32 by kethouve          #+#    #+#             */
/*   Updated: 2023/10/09 09:05:01 by kethouve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (!(((unsigned char *)s1)[i] == ((unsigned char *)s2)[i]))
		{
			if ((((unsigned char *)s1)[i] < ((unsigned char *)s2)[i]))
				return (-1);
			else
				return (1);
		}
		i++;
	}
	return (0);
}
