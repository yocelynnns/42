size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	d;
	size_t	s;
    size_t	i;
	size_t	j;

	s = ft_strlen(src);
	if (!dst && size == 0)
		return (s);
	j = ft_strlen(dst);
	d = i;
	if (size <= d)
		return (size + s);
	j = 0;
	while (src[j] && i + 1 < size)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = 0;
	return (d + s);
}