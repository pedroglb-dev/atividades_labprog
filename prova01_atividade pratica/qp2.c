#include <stdio.h>

int main (){
     
    int x0, x1, x2, y;
    int n = 6;

    scanf("%d %d", &x0, &x1);

    for(int i = 0; i<(n - 1); i++){
        scanf("%d", &x2);
        
        y = (x0 + x1 + x2)/3;
        printf(" y = %d \n", y);

        x0 = x1;
        x1 = x2;

    }    
    
    return 0;
}