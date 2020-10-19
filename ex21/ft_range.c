/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nabbassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 17:08:40 by nabbassi          #+#    #+#             */
/*   Updated: 2019/11/18 11:28:59 by nabbassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int i;
	int j;
	int *tab;

	j = max - min;
	if (min >= max)
		return (NULL);
	tab = (int*)malloc(sizeof(*tab) * (max - min));
	tab[0] = min;
	i = 1;
	while (i < j)
	{
		tab[i] = min + i;
		i++;
	}
	return (tab);
}
