#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	int		pos;

	i = 0;
	pos = -1;
	while (s[i] != '\0')
	{
		if (s[i] == (unsigned char)c)
			pos = i;
		i++;
	}
	if (c == '\0')
		return ((char *)(s + i));
	if (pos == -1)
		return (NULL);
	return ((char *)(s + pos));
}
