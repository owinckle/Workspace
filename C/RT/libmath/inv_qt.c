/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inv_qt.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbirtel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/28 16:59:57 by dbirtel           #+#    #+#             */
/*   Updated: 2017/04/04 02:48:23 by dbirtel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmath.h"

t_qt	inv_qt(t_qt q)
{
	t_qt	n;

	n.a = q.a;
	n.v.x = -q.v.x;
	n.v.y = -q.v.y;
	n.v.z = -q.v.z;
	return (n);
}
