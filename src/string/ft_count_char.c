/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_char.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztrottie <ztrottie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 13:31:36 by ztrottie          #+#    #+#             */
/*   Updated: 2023/11/01 13:32:22 by ztrottie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/// @brief will count how many times a char is in the string
/// @param str the string you wish to analyze
/// @param target the char you wish to count in the string
/// @return the number of times taget was found in str
int	count_char(char *str, char target)
{
	int		i;
	int		count;

	i = 0;
	count = 0;
	while (str && str[i])
	{
		if (str[i] == target)
			count++;
		i++;
	}
	return (count);
}
