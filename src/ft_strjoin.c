/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztrottie <zakytrottier@hotmail.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 22:29:51 by ztrottie          #+#    #+#             */
/*   Updated: 2022/11/10 23:18:14 by ztrottie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char		*ptr;
	size_t		len1;
	size_t		len2;
	size_t		i;

	i = 0;
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	if (!s1 && !s2)
		return (0);
	ptr = (char *)malloc(len1 + len2 + 2);
	if (!ptr)
		return (0);
	while (i < len1)
		ptr[i++] = *s1++;
	while (i <= (len1 + len2))
		ptr[i++] = *s2++;
	return (ptr);
}
/*
int	main(void)
{
	char *s1 = "where is my ";
	char *s2 = "malloc ???";

	printf("%s\n", ft_strjoin(s1, s2));
}*/
