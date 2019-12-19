#include "stdlib.h"
#include "unistd.h"

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while(str[i] != '\0')
		i++;
	return (i);
}

char    *ft_strrev(char *str)
{
	char *rev;
	int size;
	int i;

	i = 0;
	size = ft_strlen(str);
	rev = (char *)malloc(size + 1);
	rev[size] = '\0';
	size--;
	while (size >= 0)
	{
		rev[i] = str[size];
		i++;
		size--;
	}
	return(rev);
}

int main(int argc, char **argv)
{
	write(1, ft_strrev(argv[1]), ft_strlen(argv[1]));
	return (0);
}