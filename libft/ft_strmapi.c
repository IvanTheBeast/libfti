/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdenna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 18:44:36 by mabdenna          #+#    #+#             */
/*   Updated: 2021/11/19 18:50:47 by mabdenna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char *ft_strmapi(char const *s, char (*f)(unsigned	int, 	char))
{
	unsigned int	i;
	char *ptr;

	i = 0;
	if (!s || (!s && !f))
		return (ft_strdup(""));
	if (!f)
		return (ft_strdup("s"));
	ptr = ft_strdup(s);
	if (!ptr)
		return (NULL);
	while (s[i])
	{
		ptr[i] = (*f) (i, s[i]);
		i++;
	}
	return (ptr);
}
