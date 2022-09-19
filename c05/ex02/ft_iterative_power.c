/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: troudot <troudot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 00:54:17 by troudot           #+#    #+#             */
/*   Updated: 2022/09/19 02:01:47 by troudot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	unsigned int	result;

	if (power < 0)
		return (0);
	if (nb && power == 0)
		return (1);
	if (nb && power > 0)
		result = nb ^ power;
	return (result);
}
