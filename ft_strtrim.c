/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kethouve <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 09:52:25 by kethouve          #+#    #+#             */
/*   Updated: 2023/10/10 15:00:21 by kethouve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char const *src, char *dest, int n)
{
	int	i;

	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	isinset(char s1, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (s1 == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	int		slen;
	int		ltrim;
	char	*dest;

	slen = ft_strlen(s1);
	end = slen;
	start = 0;
	while (start < slen && isinset(s1[start], set))
		start++;
	while (end > start && isinset(s1[end - 1], set))
		end--;
	ltrim = end - start;
	dest = malloc((ltrim + 1) * sizeof(char));
	if (!dest)
		return (NULL);
	return (ft_strncpy(s1 + start, dest, ltrim));
}
