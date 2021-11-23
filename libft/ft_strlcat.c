#include "libft.h"
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	unsigned int	i;
	unsigned int	o;
	unsigned int	k;

	i = 0;
	o = 0;
	k = 0;
	if (!dst && dstsize == 0)
		return (ft_strlen(src));
	while (dst[i])
		i++;
	while (src[o])
		o++;
	if (dstsize <= i || dstsize == 0)
	{
		return (o + dstsize);
	}
	while (src[k] != '\0' && k < dstsize - i - 1 && dstsize != 0 )
	{
		dst[i + k] = src[k];
		k++;
	}
	dst[i + k] = '\0';
	return (o + i);
}
