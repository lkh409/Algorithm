#include <stdio.h>
#include <string.h>

int main()
{
    char arr[100];
    scanf("%s", arr);
    printf("%c", arr[0]);
    
    
    for(int i=1; i<strlen(arr); i++) {
        
        if ( i % 10 == 0 ) 
            printf("\n");
        
        printf("%c", arr[i]);
    }
        

    return 0;
}