/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conversion.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztrottie <ztrottie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 10:44:07 by ztrottie          #+#    #+#             */
/*   Updated: 2023/10/18 13:24:45 by ztrottie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERSION_H
# define CONVERSION_H

int			ft_atoi(const char *str);
char		*ft_itoa(int n);
int			ft_tolower(int c);
int			ft_toupper(int c);
long int	ft_li_atoi(const char *str);
int			ft_strishexa(char *str);
double		ft_atof(char *str);

#endif