/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmax.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jochang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/01 07:03:40 by jochang           #+#    #+#             */
/*   Updated: 2018/09/05 23:18:57 by jochang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/util.h"

int		ft_lstmax(t_stack *s)
{
	int	max;

	max = 0;
	if (s)
		max = s->num;
	while (s)
	{
		if (max < s->num)
			max = s->num;
		s = s->next;
	}
	return (max);
}