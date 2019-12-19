int	ft_atoi(char *str)
{
	int i;
	int min;
	int res;

	i = 0;
	res = 0;
	min = 1;
	while (str[i] == '\t' && str[i] == ' ' && str[i] == '\v')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		min = str[i] == '-' ? -1 : 1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9' && str[i] != '\0')
	{
		res = (res * 10) + (str[i] - '0');
		i++;
	}
	return (res * min);
}