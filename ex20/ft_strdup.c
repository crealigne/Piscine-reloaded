/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nabbassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 15:49:43 by nabbassi          #+#    #+#             */
/*   Updated: 2019/11/19 15:06:15 by nabbassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	int		t;
	char	*m;

	i = 0;
	t = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	m = (char*)malloc(sizeof(*m) * (i + 1));
	while (t < i)
	{
		m[t] = src[t];
		t++;
	}
	m[t] = '\0';
	return (m);
}
