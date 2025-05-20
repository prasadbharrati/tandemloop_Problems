#include <stdio.h>

void count_multiples(int numbers[], int size, int counts[]) {
   
    for (int i = 0; i < 9; i++) {
        counts[i] = 0;
    }
       
    for (int i = 0; i < size; i++) 
    {
        for (int divisor = 1; divisor <= 9; divisor++)
        {
            if (numbers[i] % divisor == 0) {
                counts[divisor - 1]++;
            }
        }
    }
}
void main()
    {
        int input[] = {2, 1, 8, 9, 12, 46, 76, 82, 15, 20, 30};
        int size = sizeof(input) / sizeof(input[0]);       
        
        int counts[9];        
        count_multiples(input, size, counts);        
               
        for (int i = 0; i < 9; i++)
        {
            printf(" %d: %d", i + 1, counts[i]);
            if (i < 8) printf(",");
            printf("\n");
        }
         
    }