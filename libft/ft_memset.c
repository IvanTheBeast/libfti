#include "libft.h"
void	*ft_memset(void *b, int c, size_t len)
{
	unsigned	char *d;
	size_t i;

	i = 0;
	d = (unsigned	char *)b;
	while(i < len)
	{
		d[i] = c;
		i++;
	}
	return(d);
}
