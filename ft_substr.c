/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kethouve <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 17:12:30 by kethouve          #+#    #+#             */
/*   Updated: 2023/10/17 18:10:06 by kethouve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t		i;
	size_t		slen;
	size_t		dlen;
	char		*sub;

	i = 0;
	slen = ft_strlen(s);
	dlen = len;
	if (start >= slen)
		return (ft_strdup(""));
	if (start + len > slen)
		dlen = slen - start;
	sub = malloc((dlen + 1) * sizeof(char));
	if (!sub)
		return (NULL);
	while (i < dlen)
	{
		sub[i] = s[start + i];
		i++;
	}
	sub[dlen] = '\0';
	return (sub);
}
