void *memchr(const void *str, int c, size_t n)
{
    unsigned char   *temp;
    size_t  i;

    temp = (unsigned char *)str;
    i = 0;
    while (n > i)
    {
        if (temp[i] == (unsigned char)c)
            return (&temp[i]);
        i++;
    }
    return (0);
}