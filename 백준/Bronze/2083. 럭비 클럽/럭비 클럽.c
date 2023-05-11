#include <stdio.h>

int main()
{
    while(1) {
        char n[10];
        int a, w;
        scanf("%s %d %d", n, &a, &w);
        if( a > 17 || w >= 80){
            printf("%s Senior\n", n);
            continue;
        }
        if ( a==0 || w==0){
            break;
        }
        
        printf("%s Junior\n", n);
    }
    

    return 0;
}