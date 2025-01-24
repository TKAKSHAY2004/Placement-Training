#include  <stdio.h>

int main(){
    int arr[] = {10,20,30,40,50};
    int *ptr=arr+3;
    
    printf("%d %d %d",ptr[0],ptr[-1],ptr[1]);
}