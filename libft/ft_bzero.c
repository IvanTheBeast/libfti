#include "libft.h"
void	ft_bzero(void *s, size_t n)
{
	char *zero;

	zero = (char*)s;
	while(n > 0)
	{
		*zero = '\0';
		zero++;
		n--;
	}
}
