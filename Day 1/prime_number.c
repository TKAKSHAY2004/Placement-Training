#include <stdio.h>

int main(){
    int x;
    scanf("%d",&x);

    for(int i=2;i<=x/2;i++){
        if(x % i == 0){
            printf("Not prime");
            return 0;
        }
    }
    printf("Prime");
    return 0;
}

// 11 => 6 x 2 - 1

// 23 => 6 x 4 - 1