int		max(int* tab, unsigned int len)
{
	int i;
	int res;

	i = 0;
	res = 0;
	while (i < len)
	{
		if (tab[i] > res)
			res = tab[i];
		i++;
	}
	return (0);
}