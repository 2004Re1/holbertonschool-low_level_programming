// Online C compiler to run C program online
#include <stdio.h>

/**
 *_strdup - fills memory
 *@str: size
 *Return: char
 */
char *_strdup(char *str)
{
	int s = 0;
	while (str[s] != '\0')
	{
		s++;
	}

	char *str1;

	str1 = malloc(sizeof(char) *s);
	for (int i = 0; i < s; i++)
		str1[i] = str[i];

	return (str1);
}

int main(void)
{
	char *s;

	s = _strdup("XKJFVIODSJFOIADHOCA");
	if (s == NULL)
	{
		printf("failed to allocate memory\n");
		return (1);
	}

	printf("%s\n", s);
	free(s);
	return (0);
}
