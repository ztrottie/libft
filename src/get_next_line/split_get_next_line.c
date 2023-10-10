/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split_get_next_line.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztrottie <ztrottie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 12:11:42 by ztrottie          #+#    #+#             */
/*   Updated: 2023/10/10 12:12:26 by ztrottie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/get_next_line.h"
#include "../../includes/string.h"

/// @brief split_get_next_line return the split of the get_next_line return
/// with the split given in args
/// @param fd the file descriptor to read in 
/// @param split the char to split on
/// @return the splitted array
char	**split_get_next_line(int fd, char split)
{
	char	*tmp;
	char	**array;

	tmp = get_next_line(fd);
	if (!tmp)
		return (NULL);
	array = ft_split(tmp, split);
	ft_free(tmp);
	return (array);
}