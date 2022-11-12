/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztrottie <zakytrottier@hotmail.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 23:01:01 by ztrottie          #+#    #+#             */
/*   Updated: 2022/11/11 23:56:52 by ztrottie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static size_t	ft_check_size(int n)
{
	size_t	i;

	i = 0;
	while (n > 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int				size;
	long int		nb;
	char			*ptr;

	nb = n;
	size = ft_check_size(nb);
	if (n < 0)
	{
		nb *= -1;
		size++;
	}
	ptr = (char *)malloc(size * sizeof(char) + 1);
	if (!ptr)
		return (0);
	if (n < 0)
	{
		ptr[0] = '-';
		size--;
	}
	while (size--)
	{
		ptr[size--] = (nb % 10) + 48;
		nb /= 10;
	}
	return (ptr);
}

int	main(void)
{
	printf("%s\n", ft_itoa(10));
}
