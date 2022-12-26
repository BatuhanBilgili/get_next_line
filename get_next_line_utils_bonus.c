/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbilgili <bbilgili@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 19:43:01 by bbilgili          #+#    #+#             */
/*   Updated: 2022/12/20 19:55:01 by bbilgili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

int	ft_find_new_line(char *afll)
{
	int	i;

	i = 0;
	if (afll == NULL)
		return (0);
	while (afll[i] != '\0')
	{
		if (afll[i] == '\n')
			return (1);
		i++;
	}
	return (0);
}

size_t	ft_strlen(char *afll)
{
	size_t	i;

	i = 0;
	if (afll == NULL)
		return (0);
	while (afll[i] != '\0')
		i++;
	return (i);
}

char	*ft_strjoin(char *fp, char *tba)
{
	char	*arr;
	int		i;

	i = 0;
	arr = malloc(sizeof(char) * (ft_strlen(fp)
				+ ft_strlen(tba) + 1));
	if (!arr)
		return (NULL);
	while (fp && fp[i])
	{
		arr[i] = fp[i];
		i++;
	}
	while (tba && *tba)
		arr[i++] = *tba++;
	arr[i] = 0;
	free(fp);
	return (arr);
}
