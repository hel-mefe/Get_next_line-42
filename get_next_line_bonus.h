/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-mefe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 15:27:19 by hel-mefe          #+#    #+#             */
/*   Updated: 2021/12/01 15:28:16 by hel-mefe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <stdio.h>
# include <stdlib.h>
# include <fcntl.h>
# include <unistd.h>

# define FD_LIMIT 1024

size_t	ft_strlen(const char *str);
int		in_buffer(char *buffer);
char	*ft_strdup(const char *s);
char	*ft_substr(const char *s, unsigned int start, size_t len);
char	*ft_strjoin(const char *s1, const char *s2);
void	ft_bzero(char *s, unsigned int start, size_t len);
void	ft_switch_everything_left(char *buffer);
char	*ft_read_file(int fd, char *buffer);
char	*ft_treat_all_cases(int fd, char *buffer);
char	*get_next_line(int fd);

#endif
