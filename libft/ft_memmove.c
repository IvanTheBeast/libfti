#include "libft.h"
void *ft_memmove (void *dest, const void *src, size_t len)
{
	char	*d = (char*)dest;
	char *s = (char*)src;
	if (!d && !s)
		return(dest);
	if (d < s)
		while (len--)
		*d++ = *s++;
	else
	{
		char *lasts = s + (len-1);
		char *lastd = d + (len-1);
		while (len--)
		*lastd-- = *lasts--;
    }
	return dest;
}
