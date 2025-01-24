#include <stdio.h>

int main() {
    int amount;
    scanf("%d",&amount);
    int n;
    scanf("%d",&n);
    int denomi[n];
    for(int i=0 ; i<n ; i++){
        scanf("%d",&denomi[i]);
    }
    int count[n];
    for(int i=0;i<n;i++){
        count[i]=0;
    }
    for(int i=0 ; i<n ; i++){
        for(int j=i+1 ; j<n ;j++){
            if(denomi[i] < denomi[j]){
                denomi[i] = denomi[i] + denomi[j] - (denomi[j]=denomi[i]);
            }
        }
    }
    for(int i=0 ; i<n ; i++){
        if(amount >= denomi[i]){
            count[i] = amount/denomi[i];
            amount = amount % denomi[i];
        }
    }

    for(int i=0; i<n ; i++){
        printf("%d*%d = %d\n",denomi[i],count[i],count[i]*denomi[i]);
    }

    return 0;
}