/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kethouve <kethouve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 15:11:19 by kethouve          #+#    #+#             */
/*   Updated: 2024/03/31 18:14:46 by kethouve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	i;
	long long int	result;
	long long int	valeur;
	int	count;

	i = 0;
	valeur = 1;
	result = 0;
	count = 0;
	while (nptr[i] == ' ' || (nptr[i] >= 9 && nptr[i] <= 13))
		i++;
	while (nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i] == '-')
			valeur = -1;
		i++;
		count++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9' && count < 2)
	{
		result = result * 10 + nptr[i] - 48;
		i++;
	}
	return (result * valeur);
}
/*
#include <stdio.h>
int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		printf("%lld", ft_atoi(argv[1]));
	}
}*/
