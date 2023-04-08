#include <stdio.h>
#include "assembly.h"

void calculator(int op, int x, int y) {
        int result;
        if (op == 1) {
            result = add_numbers(x, y);
            printf("Result: %d\n", result);
        }
        else if (op == 2) {
            result = sub_numbers(x, y);
            printf("Result: %d\n", result);
        }
        else if (op == 3) {
            result = mul_numbers(x, y);
            printf("Result: %d\n", result);
        }
        else {
            printf("Invalid Operation\n");
        }
}

int main(int argc, int **argv[]) {
    if (argv[1] == NULL || argv[2] == NULL || argv[3] == NULL) {
        printf("Please enter an operation\n");
        return 0;
    }
    else {
        int op = atoi(argv[1]);
        int x = atoi(argv[2]);
        int y = atoi(argv[3]);
        calculator(op, x, y);
        return 0;
    }
} 