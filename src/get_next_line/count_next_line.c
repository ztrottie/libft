/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_next_line.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztrottie <ztrottie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 13:33:14 by ztrottie          #+#    #+#             */
/*   Updated: 2023/11/01 13:34:52 by ztrottie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/get_next_line.h"
#include "../../includes/string.h"

size_t	count_next_line(int fd)
{
	char	*buffer;
	size_t	count;

	count = 0;
	if (BUFFER_SIZE <= 0 || fd > OPEN_MAX)
		return (-1);
	buffer = ft_calloc(BUFFER_SIZE + 1, sizeof(char));
	if (!buffer)
		return (-1);
	while (read(fd, buffer, BUFFER_SIZE) > 0)
	{
		count += count_char(buffer, '\n');
		ft_get_bzero(buffer, BUFFER_SIZE);
	}
	if (buffer)
		count++;
	buffer = ft_free(buffer);
	return (count);
}
