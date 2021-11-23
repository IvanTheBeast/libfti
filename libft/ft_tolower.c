#include "libft.h"
int	ft_tolower(int c)
{
	if (c < 91 && c > 64)
	{
		c = c + 32;
	}
	return(c);
}
