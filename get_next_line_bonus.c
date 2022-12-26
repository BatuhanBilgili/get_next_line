/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbilgili <bbilgili@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 19:56:22 by bbilgili          #+#    #+#             */
/*   Updated: 2022/12/20 20:32:30 by bbilgili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*ft_with_new_line(int fd, char *afll)
{
	int		read_bytes;
	char	*buff;

	buff = malloc(sizeof(char) * BUFFER_SIZE + 1);
	if (!buff)
		return (NULL);
	while (!ft_find_new_line(afll))
	{
		read_bytes = read(fd, buff, BUFFER_SIZE);
		if (read_bytes == 0)
			break ;
		if (read_bytes == -1)
		{
			free(buff);
			return (NULL);
		}
		buff[read_bytes] = '\0';
		afll = ft_strjoin(afll, buff);
	}
	free(buff);
	return (afll);
}

char	*ft_until_new_line(char *afll)
{
	int		i;
	char	*arr;

	i = 0;
	while (!(afll[i] == '\n' || afll[i] == '\0'))
		i++;
	if (afll[i] == '\n')
		arr = malloc(sizeof(char) * (i + 2));
	if (afll[i] == '\0')
		arr = malloc(sizeof(char) * (i + 1));
	if (!arr)
		return (NULL);
	i = 0;
	while (afll[i] != '\n' && afll[i] != '\0')
	{
		arr[i] = afll[i];
		i++;
	}
	if (afll[i] == '\n')
		arr[i++] = '\n';
	arr[i] = '\0';
	return (arr);
}

char	*ft_left(char *afll)
{
	int		i;
	int		j;
	int		len;
	char	*arr;

	i = 0;
	j = 0;
	len = ft_strlen(afll) + 1;
	while (afll[i] != '\n' && afll[i] != '\0')
		i++;
	if (afll[i] == '\0')
	{
		free(afll);
		return (NULL);
	}
	arr = malloc(sizeof(char) * (len - i));
	i++;
	if (!arr)
		return (NULL);
	while (afll[i] != '\0')
		arr[j++] = afll[i++];
	arr[j] = '\0';
	free(afll);
	return (arr);
}

char	*get_next_line(int fd)
{
	char		*line;
	static char	*afll[1024];

	if (BUFFER_SIZE <= 0 || fd < 0)
		return (NULL);
	afll[fd] = ft_with_new_line(fd, afll[fd]);
	if (afll[fd] == NULL)
		return (NULL);
	line = ft_until_new_line(afll[fd]);
	afll[fd] = ft_left(afll[fd]);
	if (!*line)
	{
		free(line);
		return (NULL);
	}
	return (line);
}
