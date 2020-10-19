/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nabbassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 13:00:45 by nabbassi          #+#    #+#             */
/*   Updated: 2019/11/06 16:53:20 by nabbassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int t;

	if (nb > 12)
		return (0);
	if (nb < 0)
		return (0);
	t = 1;
	while (nb >= 1)
	{
		t = t * nb;
		nb--;
	}
	return (t);
}
