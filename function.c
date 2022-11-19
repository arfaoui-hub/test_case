#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>



int main(){
    int n, i;
    bool x, v;

    printf("donner n : ");
    scanf("%d", &n);

    bool myFunk(int n, bool x){
        if (n % 2 == 0){
            x = true;
        }
        else{
            x = false;
        }
        return x;
    }
    v = myFunk(n, x);
    printf("%d", v);

    
    
    
    return 0;
}