#include <stdio.h>

int main()
{
    int x, n, a, b;
    int total = 0;
    
    scanf("%d\n %d", &x, &n);
    
    
    for (int i=0; i<n; i++){
        scanf("%d %d", &a, &b);
        
        total += (a * b);
    }
    
    if(x == total){
        printf("Yes\n");
    } 
    else {
        printf("No\n");
    }
    
    return 0;
    
}
