/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboivin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/11 04:31:34 by rboivin           #+#    #+#             */
/*   Updated: 2018/08/11 05:11:54 by rboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime0(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	if (nb % 2 == 0 && nb != 2)
		return (0);
	while (i <= nb / i)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int		ft_find_next_prime_iter(int nb)
{
	if (ft_is_prime0(nb) == 1)
		return (nb);
	nb += 1;
	return (ft_find_next_prime_iter(nb));
}
