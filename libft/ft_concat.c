/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gauffret <gauffret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/01 11:45:55 by gauffret          #+#    #+#             */
/*   Updated: 2017/02/01 11:45:57 by gauffret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_concat(char *src, char *to_add)
{
	int		len_s;
	int		len_d;
	char	*str;

	len_s = 0;
	str = NULL;
	len_d = ft_strlen(to_add);
	len_s = (src ? ft_strlen(src) : 0);
	if (str)
	{
		free(str);
		str = NULL;
	}
	str = ft_strnew(len_s + len_d);
	if (src && src != NULL)
		str = ft_strcpy(str, src);
	str = ft_strcat(str, to_add);
	if (src)
	{
		free(src);
		src = NULL;
	}
	return (str);
}
