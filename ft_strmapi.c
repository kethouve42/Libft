/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kethouve <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 14:20:38 by kethouve          #+#    #+#             */
/*   Updated: 2023/10/12 15:00:35 by kethouve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t		i;
	char		*dest;

	i = 0;
	if (!s || !f)
		return (0);
	dest = malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!dest)
		return (0);
	while (s[i])
	{
		dest[i] = s[i];
		i++;
	}
	dest[i] = '\0';
	i = 0;
	while (dest[i])
	{
		dest[i] = (*f)(i, dest[i]);
		i++;
	}
	return (dest);
}
