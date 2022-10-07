int	ft_strlen(char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if ((base[i] == '-' || base[i] == '+')
			|| (base[i] >= 9 && base[i] <= 13)
			|| base[i] == ' ')
			return (0);
		i++;
	}
	if (i < 2)
		return (0);
	return (i);
}

int	ft_check_base(char *base)
{
	int	i;
	int	i2;

	i = 0;
	while (base[i])
	{
		i2 = 0;
		while (base[i2])
		{
			if (base[i] == base[i2 + i] && i != i2 + i)
				return (0);
			i2++;
		}
		i++;
	}
	return (1);
}

int	ft_check_str(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (c == base[i])
			return (i);
		i++;
	}
	return (-1);
}	

int	ft_atoi_base(char *str, char *base)
{
	int	n;
	int	neg;
	int	base_len;

	base_len = ft_strlen(base);
	if (base_len < 2)
		return (0);
	if (!(ft_check_base(base)))
		return (0);
	while ((*str >= 9 && *str <= 13) || *str == ' ')
		str++;
	neg = 1;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			neg *= -1;
		str++;
	}
	n = 0;
	while (ft_check_str(*str, base) >= 0)
	{
		n = n * base_len + ft_check_str(*str, base);
		str++;
	}
	return (n);
}
