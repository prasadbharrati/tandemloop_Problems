#include <stdio.h>

void main() {
    int a;

    printf("Enter value for a: ");
    scanf("%d", &a);

    for (int i = 1; i <= a; i++) 
    {
        printf("%d", 2 * i - 1);  
        if (i < a)
        {
            printf(",");  
        }
    }

    printf("\n");  
}