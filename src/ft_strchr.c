/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztrottie <zakytrottier@hotmail.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 17:16:35 by ztrottie          #+#    #+#             */
/*   Updated: 2022/11/03 17:48:26 by ztrottie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*str;
	size_t	i;

	i = 0;
	str = (char *)s;
	if (c > 255)
		return (str);
	while (i <= ft_strlen(str))
	{
		if (str[i] == c)
			return (str + i);
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	char s[] = "tripouille";
	printf("%s\n", ft_strchr(s, 't' + 256));
	printf("%s\n", strchr(s, 't' + 256));
}*/