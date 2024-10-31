#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int n;
    scanf("%d", &n);
    if(n>=1 && n<=1000)
    {
        for (int i = 0; i < 2 * n - 1; i++)
         { 
             for (int j = 0; j < 2 * n - 1; j++)
              { 
                  int min = i < j ? i : j;
                   min = min < 2 * n - 1 - i ? min : 2 * n - 1 - i - 1;
                    min = min < 2 * n - 1 - j ? min : 2 * n - 1 - j - 1; 
                    printf("%d ", n - min);
              }
              
              printf("\n");
        }
    }
  	// Complete the code to print the pattern.
    return 0;
}