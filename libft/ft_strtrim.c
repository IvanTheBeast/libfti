#include "libft.h"
int	find_char(char *source, char c)
{
	int i;

	i = 0;
	while (source[i] != '\0')
	{
		if (source[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char *ft_strtrim(char const *s1, char const *set)
{
	int i;
	int len;
	int p;
	char *ptr;

	i = 0;
	p = 0;
	if (s1 == NULL)
		return (NULL);
	len = ft_strlen(s1) - 1;
	while (find_char((char*)set, s1[i]))
		i++;
	while (find_char((char*)set, s1[len]))
		len--;
	if (len > i)
		ptr = malloc(sizeof(char) * (len - i) + 2);
	else
		ptr = malloc(sizeof(char) * 1);
	if (ptr == NULL)
		return (NULL);
	while (i <= len)
	{
		ptr[p] = s1[i];
		i++;
		p++;
	}
	ptr[p] = '\0';
	return (ptr);
}
