/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kethouve <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 14:07:28 by kethouve          #+#    #+#             */
/*   Updated: 2023/10/12 18:35:27 by kethouve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t		i;
	const char	*tmps;
	char		*tmpd;

	tmps = src;
	tmpd = dest;
	if (!dest && !src)
		return (0);
	if (tmpd > tmps)
	{
		while (n-- > 0)
		{
			tmpd[n] = tmps[n];
		}
	}
	else
	{
		i = 0;
		while (i < n)
		{
			tmpd[i] = tmps[i];
			i++;
		}
	}
	return (tmpd);
}
