#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char s[100]="this is c";
    /*s = malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    s = realloc(s, strlen(s) + 1);*/
    //s="this is c";
    int i=0;
    while(*(s+i)!='\0')
    {
        if(*(s+i)!=' ')
        {
            printf("%c",*(s+i));
        }
        else if(*(s+i)==' ')
            printf("\n");
        
        i++;
        
    }
    //Write your logic to print the tokens of the sentence here.
    return 0;
}
