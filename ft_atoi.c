int ft_atoi(const char *nptr)
{
    int i;
    int signe;
    int res;

    signe = 1;
    i = 0;
    res = 0;
    while(nptr[i] == ' ' || (nptr[i] >= 9 && nptr[i] <= 13))
        i++;
    if(nptr[i] == '-')
    {
        signe *= -1;
        i++;
    }
    else if(nptr[i] == '+')
        i++;
    while(nptr[i] &&  (nptr[i] >= '0' && nptr[i] <= '9'))
    {
        res *= 10;
        res = res + ((char)nptr[i] - 48);
        i++;
    }
    return (res);
}