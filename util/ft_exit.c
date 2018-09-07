/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_exit.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jochang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/29 18:02:05 by jochang           #+#    #+#             */
/*   Updated: 2018/09/05 23:16:35 by jochang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/util.h"

void	ft_exit(void)
{
	write(2, "\033[31mError\n\033[0m", 15);
	exit(1);
}