/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nabbassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 13:48:49 by nabbassi          #+#    #+#             */
/*   Updated: 2019/11/13 11:29:37 by nabbassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int c;
	int d;

	c = 1;
	while (c < argc)
	{
		d = 0;
		while (argv[c][d] != '\0')
		{
			ft_putchar(argv[c][d]);
			d++;
		}
		ft_putchar('\n');
		c++;
	}
	return (0);
}
