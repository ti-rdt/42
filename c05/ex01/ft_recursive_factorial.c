/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: troudot <troudot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 21:53:15 by troudot           #+#    #+#             */
/*   Updated: 2022/09/19 01:59:39 by troudot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	unsigned int	nbr;

	nbr = nb;
	if (nb == 0)
		return (0);
	if (nb < 0)
		return (0);
	if (nb > 0)
		nbr *= ft_recursive_factorial(nb - 1);
	return (nbr);
}
