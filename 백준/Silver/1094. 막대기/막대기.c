#include <stdio.h>

int main(){
    int x;
    int stick = 0;
    scanf("%d", &x);
    
    while(x > 0){
        if(x%2 == 1) stick++;
        x = x/2;
        
    }
    printf("%d", stick);
    return 0;
}
