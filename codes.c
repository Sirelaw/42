int main()
{
	int i=0;
	int arr[] = {24};
	while (i<1)
	{
		printf("%d ", *(arr + i));
		i++;
	}
	ft_rev_int_tab(arr, 1);
	i=0;
	while (i<1)
	{
		printf("%d ", arr[i]);
		i++;
	}
}

strncpy(char *dest, const char *src, size_t n)
{
	size_t i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';

	return dest;
}

#include <stdio.h>

int main (int argc,char **argv)
{
	int *pointer;

	if (argc != 1)
		return (76);

	pointer = precheck_and_atoi(argv[0]);
	if (*pointer == 76)
		//write error;
		return (0);
}

{
	if(arr[0] == 2) && (arr[5] == 2)
	{
		if (arr[1] == 2)
			arr[4] = 3;
		if (arr[4] == 2)
			arr[1] = 3;
	}
	if(arr[0] == 2) && (arr[5] == 2)
	{
		if (arr[1] == 2)
			arr[4] = 3;
		if (arr[4] == 2)
			arr[1] = 3;
	}
}

int main()
{
	printf ("%i\n", ft_atoi("  ---+--+067500rab567"));
	return (0);
}