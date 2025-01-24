#include <stdio.h>

int main(){
    
    float n, m, sum;
    
    scanf("%f %f", &n, &m);

    sum = n + m;
    if(sum == (int)sum){
        printf("%d", (int)sum);
    }
    else{
        printf("%.2f", sum);
    }
    
}