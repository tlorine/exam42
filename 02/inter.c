#include "unistd.h"

int search_repeat(char ch, char *str, int end)
{
	int i;

	i = 0;
	while (i < end)
	{
		if (str[i] == ch)
			return (0);
		i++;
	}
	return (1);
}

int search_char(char ch, char *str)
{
	int i;

	i = 0;
	while (str[i] != ch && str[i] != '\0')
		i++;
	if (str[i] != '\0')
		return (1);
	else
		return (0);
}

int main(int argc, char **argv)
{
	char *first_p;
	char *end_p;
	int fi;

	fi = 0;
	if (argc == 3)
	{
		first_p = argv[1];
		end_p = argv[2];
		while (first_p[fi])
		{
			if (search_repeat(first_p[fi], first_p, fi))
			{
				if (search_char(first_p[fi], end_p))
					write(1, &first_p[fi], 1);
			}
			fi++;
		}
	}
	write(1, "\n", 1);
}