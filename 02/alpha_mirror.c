#include "unistd.h"

void	alpha_mirror(char *str)
{
	int i;
	int poz;
	int asc;

	i = 0;
	while (str[i] != '\0')
	{
		asc = str[i];
		if ((asc >= 'A' && asc <= 'Z') || (asc >= 'a' && asc <= 'z'))
		{
			if ((asc >= 'A' && asc <= 'Z'))
				poz = 65;
			else
				poz = 97;
			asc = 25 - (asc - poz) + poz;
		}
		write(1, &asc, 1);
		i++;
	}
}

int		main(int argc, char **argv)
{
	if (argc == 2)
		alpha_mirror(argv[1]);
	write(1, "\n", 1);
}