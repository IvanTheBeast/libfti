#include "libft.h"
int	ft_atoi(const char *str)
{
	int	i;
	int	s;
	unsigned	long int	nbr;

	i = 0;
	s = 1;
	nbr = 0;
	while (str[i] == '\v' || str[i] == '\t' || str[i] == '\n' || str[i] == '\r'
		|| str[i] == '\f' || str[i] == ' ')
	{
		 i++;
	}
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			s *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nbr = nbr * 10 + str[i] - 48;
		i++;
	}
	if (nbr >= 9223372036854775807 && s == 1)
		return (-1);
	else if (nbr >= 9223372036854775807 && s == -1)
		return (0);
	return (nbr * s);
}
