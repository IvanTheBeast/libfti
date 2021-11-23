#include "libft.h"
char	*ft_strrchr(const char *s, int c)
{
	int i;
	char *d;

	i = 0;
	d = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			d = (char *)s + i;
		}
		i++;
	}
	if (s[i] == c)
		d = (char *)s + i;	
	return (d);
}
