/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztrottie <zakytrottier@hotmail.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 18:07:34 by ztrottie          #+#    #+#             */
/*   Updated: 2022/11/11 22:58:34 by ztrottie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static size_t	ft_word_count(char const *s, char c)
{
	size_t	i;
	size_t	count;
	int		trigger;

	i = 0;
	trigger = 1;
	count = 0;
	while (i <= ft_strlen(s))
	{
		if ((s[i] == c || s[i] == 0) && trigger == 0)
		{
			count++;
			trigger = 1;
		}
		else if (s[i] != c && trigger == 1)
			trigger = 0;
		i++;
	}
	return (count + 1);
}

static size_t	ft_word_len(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] && s[i] != c && s[i] != 0)
		i++;
	return (i);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	len;
	size_t	j;
	char	**ptr;

	ptr = (char **)ft_calloc(ft_word_count(s, c), sizeof(char *));
	if (!s || !ptr)
		return (0);
	i = 0;
	j = 0;
	while (s[i])
	{
		len = 1;
		if (s[i] != c && s[i] != 0)
		{
			len = ft_word_len(s + i, c);
			ptr[j++] = ft_substr(s, i, len);
		}
		i += len;
		ptr[j] = 0;
	}
	return (ptr);
}
/*
int	main(void)
{
	char **result = ft_split("tripouille", 0);

	printf("%s", result[0]);
}*/
