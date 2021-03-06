/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: owinckle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 15:04:01 by owinckle          #+#    #+#             */
/*   Updated: 2016/01/05 15:42:51 by owinckle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

size_t	ft_strlen(char *str)
{
	int i;
	int length;

	i = 0;
	length = 0;
	while (str[i] != '\0')
	{
		length++;
		i++;
	}
	return (length);
}
