/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbilgili <bbilgili@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 19:40:59 by bbilgili          #+#    #+#             */
/*   Updated: 2022/12/20 20:32:41 by bbilgili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <stdlib.h>
# include <unistd.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 5
# endif

int		ft_find_new_line(char *afll);
size_t	ft_strlen(char *afll);
char	*ft_strjoin(char *fp, char *tba);
char	*ft_with_new_line(int fd, char *afll);
char	*ft_until_new_line(char *afll);
char	*ft_left(char *afll);
char	*get_next_line(int fd);

#endif