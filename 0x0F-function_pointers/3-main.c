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
    int (*func)(int, int);

    if (argc != 4)
    {
        printf("Error\n");
        exit(98);
    }

    num1 = atoi(argv[1]);
    operation = argv[2];
    num2 = atoi(argv[3]);

    if (*operation == '%' || *operation == '/')
    {
        if (num2 == 0)
        {
            printf("Error\n");
            exit(100);
        }
    }

    func = get_op_func(operation);
    if (func == NULL)
    {
        printf("Error\n");
        exit(99);
    }

    printf("%d\n", func(num1, num2));

    return 0;
}
