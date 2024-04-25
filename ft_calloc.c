/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kethouve <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 15:45:14 by kethouve          #+#    #+#             */
/*   Updated: 2023/10/17 15:56:11 by kethouve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*c;
	int		i;

	i = 0;
	if (size == 0 || nmemb == 0)
		return (malloc(0 * sizeof(char)));
	c = malloc(nmemb * size);
	if (!c)
		return (NULL);
	while (c[i])
	{
		c[i] = '\0';
		i++;
	}
	return (c);
}
