/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_printf.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztrottie <zakytrottier@hotmail.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 10:27:07 by ztrottie          #+#    #+#             */
/*   Updated: 2023/03/02 15:35:23 by ztrottie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ft_printf.h"
#include "../../includes/string.h"

int	ft_putstr_printf(char *s)
{
	size_t	i;

	i = 0;
	if (!s)
		s = "(null)";
	write(1, s, ft_strlen(s));
	return (ft_strlen(s));
}
