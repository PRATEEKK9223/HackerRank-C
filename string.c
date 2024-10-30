#include <stdio.h>
#include <string.h> 
#include <math.h> 
#include <stdlib.h> 
int main()
{ 
        char ch; 
        scanf("%c", &ch);
        printf("%c\n", ch); 
        char s[100]; 
        scanf("%s", s); 
        printf("%s\n", s); 
        
        // Clear the newline character left by scanf 
        getchar();
        char sen[100];
        fgets(sen, sizeof(sen), stdin); 
        printf("%s", sen);
            return 0;
}
