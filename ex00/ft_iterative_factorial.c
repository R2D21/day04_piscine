/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboivin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/11 00:11:38 by rboivin           #+#    #+#             */
/*   Updated: 2018/08/11 00:13:11 by rboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int	result;
	int	i;

	i = 1;
	result = 1;
	if ((nb <= 0) || (nb > 12))
		return (0);
	if (nb == 1)
		return (1);
	while (i <= nb)
	{
		result = i * result;
		i++;
	}
	return (result);
}
