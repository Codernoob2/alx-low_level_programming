#include <stdio.h>

/**
  *main - multiplys wo numbers
  *@argc: int
  *@argv: list
  *Return: 0
  */

int main(int argc,char *argv[])
{
	int sum;

	if (argc == 3)
	{
	sum = atoi(argv[1]) * (argv[2]);
	printf("%d\n", sum);
	}
	else
	{
		printf("error\n");
		return (1);
	}
	return (0);
}
