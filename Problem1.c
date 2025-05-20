#include <stdio.h>
#include <string.h>
#include <stdlib.h>


double calculate(double a, double b, const char operation[])
 {
    if (strcmp(operation, "add") == 0 || strcmp(operation, "+") == 0 || strcmp(operation, "addition") == 0) 
    {
        return a + b;
    }
    else if (strcmp(operation, "subtract") == 0 || strcmp(operation, "-") == 0 || strcmp(operation, "subtraction") == 0)
    {
        return a - b;
    }
    else if (strcmp(operation, "multiply") == 0 || strcmp(operation, "*") == 0 || strcmp(operation, "multiplication") == 0)
    {
        return a * b;
    }
    else if (strcmp(operation, "divide") == 0 || strcmp(operation, "/") == 0 || strcmp(operation, "division") == 0)
    {
        if (b == 0) {
            printf("Error: Division by zero\n");
            exit(1);
        }
        return a / b;
    }
    else
    {
        printf("Error: Invalid operation\n");
        exit(1);
    }
}


int main()
 {
    double a, b;
    char operation[20];
    
    printf("Enter the  first number: ");
    scanf("%lf", &a);
    
    printf("Enter the second number: ");
    scanf("%lf", &b);
    
    printf("Enter the operation (add/subtract/multiply/divide): ");
    scanf("%s", operation);
    
    double result = calculate(a, b, operation);
    printf("Result: %.2lf\n", result);
    
    return 0;
}
