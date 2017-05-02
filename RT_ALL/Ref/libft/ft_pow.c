/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pow.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbirtel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/16 13:53:02 by dbirtel           #+#    #+#             */
/*   Updated: 2016/10/18 18:24:06 by dbirtel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

double		ft_pow(double nbr, size_t pow)
{
	double		ret;

	ret = 1;
	while (pow > 0)
	{
		ret = ret * nbr;
		pow--;
	}
	return (ret);
}