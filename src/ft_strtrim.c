/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztrottie <zakytrottier@hotmail.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 23:08:26 by ztrottie          #+#    #+#             */
/*   Updated: 2022/11/10 23:51:12 by ztrottie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static size_t	ft_last_print(char const *s1)
{
	int	len;

	len = ft_strlen(s1);
	while (len >= 0)
	{
		if (ft_isprint(s1[len]))
			return (len);
		len--;
	}
	return (len);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ptr;
	size_t	restart;
	size_t	i;
	
	if (!s1)
		return (0);
	ptr = (char *)malloc(ft_strlen(s1));
	if (!ptr)
		return (0);
	i = 0;
	while (!ft_isprint(s1[i]))
	{
		ptr[i]
	}
}
