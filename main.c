#include <stdio.h>
int ft_strlen(char *str)
{
	int i;
	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
int main()
{
	char str[] = "Hello";
	printf("%d\n", ft_strlen(str));
	printf("collaboration");
	char *p = "Hello";
	printf("%d\n", ft_strlen(p));
	printf("+++++++++++++++\n");
	printf("+++++++++++++++\n");
	//com
	//__has_attribute
	//__has_attribute
	return (0);
}
