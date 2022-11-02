echo -------- create files --------

for name in isalpha isdigit isalnum isprint isascii strlen memset bzero memcpy memmove strlcpy strlcat toupper tolower strchr strrchr strncmp memchr memcmp strnstr atoi calloc strdup;
do
	echo "created ft_$name"
	touch ft_${name}.c
done

for name in ft_substr ft_strjoin ft_strtrim ft_split ft_itoa ft_strmapi ft_striteri ft_putchar_fd ft_putstr_fd ft_putendl_fd ft_putnbr_fd;
do
	echo "created ft_$name"
	touch ${name}.c
done
