/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdenna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 18:52:19 by mabdenna          #+#    #+#             */
/*   Updated: 2021/11/19 20:19:40 by mabdenna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int	ft_countlen(int n)
{
	int i;

	i = 0;
	if (n < 0)
	{
		n = n * - 1;
		i++;
	}
	while (n != 0)
	{
		n = (n / 10);
		i++;
	}
	return (i);
}

char *ft_itoa(int n)
{
	int	len;
	long nbr;
	char	*ptr;

	nbr = n;
	len = ft_countlen(nbr);
	ptr = 0;
	if (!(ptr = malloc(sizeof(char) * len + 1)))
		return (0);
	if (nbr == 0)
		return(ft_strdup("0"));
	if (nbr < 0)
	{
		nbr = nbr * (-1);
		ptr[0] = '-';
	}
	ptr[len--] = '\0';
	while (nbr != 0)
	{
		ptr[len--] = (nbr % 10) + '0';
		nbr = nbr / 10;
	}
	return (ptr);
}
