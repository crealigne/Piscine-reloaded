/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nabbassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 15:11:05 by nabbassi          #+#    #+#             */
/*   Updated: 2019/11/19 14:38:33 by nabbassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_putchar(char c);

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while ((s1[i] && s2[i] != '\0') && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

void	affiche(char **argv)
{
	int v;
	int i;

	v = 1;
	while (argv[v] != 0)
	{
		i = 0;
		while (argv[v][i] != '\0')
		{
			ft_putchar(argv[v][i]);
			i++;
		}
		ft_putchar('\n');
		v++;
	}
}

int		main(int argc, char **argv)
{
	int		a;
	int		b;
	char	*test;

	a = 1;
	while (a < argc)
	{
		b = 1;
		while (b < argc)
		{
			if (ft_strcmp(argv[a], argv[b]) < 0)
			{
				test = argv[a];
				argv[a] = argv[b];
				argv[b] = test;
			}
			b++;
		}
		a++;
	}
	affiche(argv);
}
