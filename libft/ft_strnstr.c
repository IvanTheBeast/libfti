#include "libft.h"
char    *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	unsigned int	i;
	unsigned int	j;
	char *p;

	p = (char *)haystack;
	i = 0;
	if (*needle == '\0' || len == 0)
		return (p);
	while (p[i]!= '\0')
	{
		if (p[i] == needle[0])
		{
			j = 0;
			while (p[i + j] == needle[j] && needle[j] != '\0' && i + j < len)
			{
				j++;
				if (needle[j] == '\0' )
				{
					return (&p[i]);
				}
			}
		}
		i++;
	}
	return (0);
}
