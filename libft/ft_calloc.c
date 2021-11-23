#include "libft.h"
void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*pt;

	pt = malloc(count * size);
	if (!pt)
		return(NULL);
	ft_bzero(pt,count * size);
	return(pt);
}
