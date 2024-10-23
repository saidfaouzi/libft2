static int ft_isalpha(char c)
{
    if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
        return (1024);
    return (0);
}

static int ft_isdigit(int a)
{
    if(a >= 0 && a <= 9)
        return (2048);
    return (0);
}
int ft_isalnum(char c)
    {
        if(ft_isalpha(c) == 1024 || ft_isdigit(c) == 2048)
            return (1);
        return (0);
    }