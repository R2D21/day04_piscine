/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fr_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboivin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/11 00:53:05 by rboivin           #+#    #+#             */
/*   Updated: 2018/08/11 00:59:20 by rboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_power(int nb, int power)
{
	int		result;

	result = 1;
	if ((nb == 0 && power != 0) || power < 0)
		return (0);
	if ((power == 0) || ((nb < 0) && (power == 0)))
		return (1);
	return (result = nb * ft_recursive_power(nb, power - 1));
}
