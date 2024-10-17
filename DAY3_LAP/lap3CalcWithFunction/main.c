#include <stdio.h>
#include <stdlib.h>
int add(int, int);
int sub(int, int);
int dive(int, int);
int mult(int, int);

int main() {
    int num1, num2;
    char op, breakLoop;

    do {
        int res;
        do {
            printf("Enter the first number: ");
            res = scanf("%d", &num1);
            if (res != 1) {
                printf("Invalid input. Please enter an integer.\n");
                _flushall();
            }
        } while (res != 1);

        do {
            printf("Enter the second number: ");
            res = scanf("%d", &num2);
            if (res != 1) {
                printf("Invalid input. Please enter an integer.\n");
                _flushall();
            }
        } while (res != 1);

        do {
            printf("Enter the operation (+, -, *, /): ");
            _flushall();
            scanf("%c", &op);
            if (op == '/' && num2 == 0) {
                printf("Error: Division by zero is undefined.\n");
            }
        } while (op != '+' && op != '-' && op != '*' && op != '/' || (op == '/' && num2 == 0));

        int result = 0;
        switch (op) {
            case '+':
                result = add(num1, num2);
                break;
            case '-':
                result = sub(num1, num2);
                break;
            case '/':
                result = dive(num1, num2);
                break;
            case '*':
                result = mult(num1, num2);
                break;
            default:
                printf("Invalid operator.\n");
        }
        printf("%d %c %d = %d\n", num1, op, num2, result);
        printf("to exit press n otherwise press y:");
        _flushall();
        scanf("%c", &breakLoop);
    } while (breakLoop != 'n');

    return 0;
}

int add(int n1, int n2) {
    return n1 + n2;
}

int sub(int n1, int n2) {
    return n1 - n2;
}

int dive(int n1, int n2) {
    return n1 / n2;
}

int mult(int n1, int n2) {
    return n1 * n2;
}
