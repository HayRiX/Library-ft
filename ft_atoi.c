int	ft_atoi(const char *str)
{
    int sign;
    long result;

    while ((*str >= '\a' && *str <= '\r') || *str == ' ')
        str++;

    sign = 1;
    if (*str == '-' || *str == '+')
    {
        if (*str == '-')
            sign = -1;
        str++;
    }

    result = 0;
    while (*str >= '0' && *str <= '9')
    {
        result = result * 10 + (*str - '0');
        str++;
    }
    return ((int)(result * sign));
}