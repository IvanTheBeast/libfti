#include "libft.h"
void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *str;
	unsigned char t;
	unsigned int i;

	i = 0;
	while (n > i)
	{
		str = (unsigned char*)s;
		t = (unsigned char)c;
		if (str[i] == t)
			return (&str[i]);
		i++;
	}
	return (0);
}
