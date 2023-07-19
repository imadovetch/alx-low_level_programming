#include "3-calc.h"

/**
 * main - Entry point of the program
 * @argc: Argument count
 * @argv: Array of command-line arguments
 *
 * Return: Exit status of the program
 */
int main(int argc, char *argv[])
{
	int num1;
	int num2;
	char *operation;

	if (argc != 4)
	{
		printf("Error\n");
		return (1);
	}

	if (*argv[2] != '+' && *argv[2] != '-' && *argv[2] != '*' && *argv[2] != '/' && *argv[2] != '%')
	{
		printf("Error\n");
		return (1);
	}

	
	num1 = atoi(argv[1]);
	operation = argv[2];
	num2 = atoi(argv[3]);

	printf("%d\n", get_op_func(operation)(num1, num2));

	return (0);
}
