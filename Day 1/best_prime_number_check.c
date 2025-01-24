#include <stdio.h>

int main(){
    int x;
    scanf("%d",&x);

    if((x>3) && (((x%2==0) || (x%3==0)))){
            printf("Not prime");
            return 0;
    }

    else{
        for(int i=5;i*i<=x;i+=6){
            if((x%i==0) || (x%(i+2)==0)){
                printf("Not prime");
                return 0;
            }
        }
    }
   
    printf("Prime");
    return 0;
}