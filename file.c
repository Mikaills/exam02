int main(int ac, char **av)
{
	int i;
	int k;

	i = 0;
	k = 0;
	if (ac == 3)
	{
		if (av[1][i] == 0)
		{
			write(1, "1\n", 2);
			return (0);
		}
		while (av[2][i] != '\0')
		{
			if (av[1][k] == av[2][i])
			{
				k++;
				if(k == ft_strlen(av[1]))
				{
					write(1, "1\n", 2);
					return (0);
				}
			}
			i++;
		}
	}
	else if (ac != 3)
	{
		write(1, "\n", 1);
		return (0);
	}
	if (k != ft_strlen(av[1]))
		write(1, "0\n", 2);
	return (0);

}
