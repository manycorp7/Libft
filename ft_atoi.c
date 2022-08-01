int ft_atoi(char *str)
{
    int i;
    int signe;
    int res;

    i = 0;
    signe = 1;
    res = 0;
    while(str[i] == 32 || str[i] >= 9 && str[i] <= 13)
    {
        i++;
    }
    if(str[i] == '-')
    {
        signe = -1;
        i++;
    }
    else if(str[i] == '+')
    {
        i++;
    }
    while(str[i] && str[i] >= '0' && str[i] <= '9')
    {
        res *= 10;
        res += str[i] - '0';
        i++;
    }
    return (res * signe);
}