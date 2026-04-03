#include <stdio.h>

int main() {
    int a, b;
    char op;

    printf("Enter the first number: ");
    scanf("%d", &a);

    printf("Enter the second number: ");
    scanf("%d", &b);

    printf("Enter the operator (+,-,*,/,%%): ");
    // getchar(); // consume leftover newline
    scanf(" %c", &op);

    switch(op) {
        case '+':
            printf("Result: %d\n", a + b);
            break;
        case '-':
            printf("Result: %d\n", a - b);
            break;
        case '*':
            printf("Result: %d\n", a * b);
            break;
        case '/':
            if (b != 0) {
                printf("Result: %d\n", a / b);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        case '%':
            if (b!=0){
                printf("Result: %d\n",a %b);
            }else{
                printf("Error: Modulo by zero is not allowed.\n");
            }
            break;
        default:
            printf("Invalid operator.\n");
    }


 return 0;   
}