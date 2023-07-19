#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct op {
    char *op;
    int (*f)(int a, int b);
} op_t;

int op_add(int a, int b) {
    return a + b;
}

int op_sub(int a, int b) {
    return a - b;
}

int op_mul(int a, int b) {
    return a * b;
}

int op_div(int a, int b) {
    return a / b;
}

int op_mod(int a, int b) {
    return a % b;
}

int (*get_op_func(char *s))(int, int) {
    op_t ops[] = {
        {"+", op_add},
        {"-", op_sub},
        {"*", op_mul},
        {"/", op_div},
        {"%", op_mod},
        {NULL, NULL}
    };

    int i = 0;
    while (ops[i].op != NULL) {
        if (strcmp(s, ops[i].op) == 0)
            return ops[i].f;
        i++;
    }
    return NULL;
}

int main(int argc, char *argv[]) {
    if (argc != 4) {
        printf("Error\n");
        return 1;
    }

    if (*argv[2] != '+' && *argv[2] != '-' && *argv[2] != '*' && *argv[2] != '/' && *argv[2] != '%') {
        printf("Error\n");
        return 1;
    }

    int num1 = atoi(argv[1]);
    char *operation = argv[2];
    int num2 = atoi(argv[3]);

    printf("%d\n", get_op_func(operation)(num1, num2));

    return 0;
}
