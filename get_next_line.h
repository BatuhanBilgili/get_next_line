/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbilgili <bbilgili@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 15:09:39 by bbilgili          #+#    #+#             */
/*   Updated: 2022/12/13 15:30:08 by bbilgili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

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