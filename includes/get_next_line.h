/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztrottie <ztrottie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 13:11:40 by ztrottie          #+#    #+#             */
/*   Updated: 2023/11/07 11:01:04 by ztrottie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1
# endif

# include <unistd.h>
# include <limits.h>
# include <stdlib.h>
# include <stdio.h>

# ifdef FOPEN_MAX
#  define MAX_OPEN FOPEN_MAX
# endif

# ifdef OPEN_MAX
#  define MAX_OPEN OPEN_MAX
# endif

char	*get_next_line(int fd);
void	*ft_calloc(size_t count, size_t size);
void	*ft_get_bzero(void *p, size_t size);
void	*ft_memset(void *b, int c, size_t len);
void	*ft_free(void *p);
size_t	ft_strlen(const char *s);
char	*ft_get_strjoin(char *s1, char *s2);
size_t	count_next_line(int fd);

#endif
