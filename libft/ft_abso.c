/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abso.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-roqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/10 10:49:15 by tde-roqu          #+#    #+#             */
/*   Updated: 2015/12/10 10:58:23 by tde-roqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_abso(int a)
{
	if (a == -2147483648)
	{
		ft_putstr_fd("Error.", 2);
		return (0);
	}
	else if (a < 0)
		return (-a);
	else
		return (a);
}
