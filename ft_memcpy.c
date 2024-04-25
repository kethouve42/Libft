/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kethouve <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 13:12:33 by kethouve          #+#    #+#             */
/*   Updated: 2023/10/12 17:35:31 by kethouve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t		i;
	const char	*tmps;
	char		*tmpd;

	tmps = src;
	tmpd = dest;
	i = 0;
	if (!dest && !src)
		return (0);
	if (tmps == NULL && tmpd == NULL && n == 0)
		return (0);
	while (i < n)
	{
		tmpd[i] = tmps[i];
		i++;
	}
	return (((char *)tmpd));
}
