#include "unistd.h"

int ft_strlen(char *str)
{
	int i;

	while (str[i])
		i++;
	return (i);
}

void write_lats_word(char *str, int i)
{
	if (str[i] == ' ' || str[i] == '\t' || i < 0)
		return ;
	write_lats_word(str, i - 1);
	write(1, &str[i], 1);
}

int main(int argc, char **argv)
{
	if (argc == 2)
		write_lats_word(argv[1], ft_strlen(argv[1]) - 1);
	write(1, "\n", 1);
}