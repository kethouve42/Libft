/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kethouve <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 12:49:08 by kethouve          #+#    #+#             */
/*   Updated: 2023/10/13 15:43:12 by kethouve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	char	*b;

	b = (char *)big;
	if (little[0] == '\0' || little == big)
		return (b);
	i = 0;
	j = 0;
	while (big[i] && i < len && len > 0)
	{
		if (big[i] == little[0])
		{
			j = 0;
			while (little[j] && big[i + j] == little[j] && i + j < len)
			{
				if (!little[j + 1])
					return ((char *)big + i);
				j++;
			}
		}
		i++;
	}
	return (NULL);
}
