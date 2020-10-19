/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nabbassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 16:00:39 by nabbassi          #+#    #+#             */
/*   Updated: 2019/11/19 14:46:51 by nabbassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	int res;

	if (nb < 0 || nb > 12)
		res = 0;
	else if (nb == 0 || nb == 1)
		res = 1;
	else
	{
		res = nb;
		res = res * ft_recursive_factorial(nb - 1);
	}
	return (res);
}
