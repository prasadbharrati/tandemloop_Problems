#include <stdio.h>

void generateSeries(int a) 
{
    int i;
    int terms = (a % 2 == 0) ? a - 1 : a;
    terms = (terms < 1) ? 1 : terms;    
    for (i = 1; i <= terms; i++) 
    {
        printf("%d", 2*i - 1);
        if (i != terms) 
        {
            printf(", ");
        }
    }
    printf("\n");
}

void main() {
    int a;
    
    printf("Enter integer a: ");
    scanf("%d", &a);    
    generateSeries(a);     
}