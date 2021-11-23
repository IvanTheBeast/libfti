#include "libft.h"
char * ft_strchr(const char *s, int c)
{
	char o;
	char *d;
	int i;

	o = (char)c;
	d = (char*)s;
	i = 0;
	if (o == '\0')
	{
		while (d[i])
			i++;
		return (&d[i]);
	}
	while (d[i])
	{
		if (d[i] == o)
			return (&d[i]);
		i++;
	}
	return (0);
}
