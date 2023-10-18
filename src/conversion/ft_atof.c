/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atof.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztrottie <ztrottie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 13:24:08 by ztrottie          #+#    #+#             */
/*   Updated: 2023/10/18 13:24:18 by ztrottie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

double	ft_atof(char *str)
{
	double	res;
	double	factor;
	int		i;

	i = 0;
	factor = 1;
	res = 0.0;
	if (str[i] == '-')
		factor = -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	if (str[i] == '.')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10.0 + (str[i] - '0');
		factor = factor / 10.0;
		i++;
	}
	return (res * factor);
}
